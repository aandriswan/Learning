#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the minimumNumber function below.
int minimumNumber(int n, char* password) {
    // Return the minimum number of characters to make the password strong
    int min, count=0;
    int d=0,u=0,l=0,c=0;
    int i,t;
    char* numbers = "0123456789";
    char* lower_case = "abcdefghijklmnopqrstuvwxyz";
    char* upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* special_characters = "!@#$%^&*()-+";
    if (strlen(password)==1)
    {
        min = 5;
    } else if (strlen(password)==2)
    {
        min = 4;
    } else if (strlen(password)==3)
    {
        min = 3;
    } else if (strlen(password)==4)
    {
        for (i=0;i<4;i++)
        {
            if (strchr(numbers,password[i]) != NULL)
            {
                d++;
            }
            if (strchr(lower_case,password[i]) != NULL)
            {
                l++;
            }
            if (strchr(upper_case,password[i]) != NULL)
            {
                u++;
            }
            if (strchr(special_characters,password[i]) != NULL)
            {
                c++;
            }
        }
        if (d==4 || l==4||c==4||u==4)
        {
            min = 3;
        } else {
            min = 2;
        }
    } else if (strlen(password)==5)
    {
        for (i=0;i<5;i++)
        {
            if (strchr(numbers,password[i]) != NULL)
            {
                d++;
            }
            if (strchr(lower_case,password[i]) != NULL)
            {
                l++;
            }
            if (strchr(upper_case,password[i]) != NULL)
            {
                u++;
            }
            if (strchr(special_characters,password[i]) != NULL)
            {
                c++;
            }
        }
        if (d==5 || l==5||c==5||u==5)
        {
            min = 3;
        } else {
            if (d>0)
        {
            count += 1;
        }
        if (l>0)
        {
            count += 1;
        }
        if (u>0)
        {
            count += 1;
        }
        if (c>0)
        {
            count += 1;
        }
        if( count == 4)
        {
            min = 1;
        } else
        min = 4 - count;
        }
    } else if(strlen(password) >=6 )
    {
        for (i=0;i<n;i++)
        {
            if (strchr(numbers,password[i]) != NULL)
            {
                d++;
            }
            if (strchr(lower_case,password[i]) != NULL)
            {
                l++;
            }
            if (strchr(upper_case,password[i]) != NULL)
            {
                u++;
            }
            if (strchr(special_characters,password[i]) != NULL)
            {
                c++;
            }
        }
        if (d>0)
        {
            count += 1;
        }
        if (l>0)
        {
            count += 1;
        }
        if (u>0)
        {
            count += 1;
        }
        if (c>0)
        {
            count += 1;
        }
        min = 4 - count;
    }
    else
    {
        min = 6 - strlen(password);
    } 
    return min;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char* password = readline();

    int answer = minimumNumber(n, password);

    fprintf(fptr, "%d\n", answer);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
