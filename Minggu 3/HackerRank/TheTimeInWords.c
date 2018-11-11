#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void result (int n)
{
    switch (n)
    {
           case 1: printf("one");
            break;
           case 2: printf("two");
            break;
            case 3: printf("three");
            break;
           case 4: printf("four");
            break;
            case 5: printf("five");
            break;
           case 6: printf("six");
            break;
            case 7: printf("seven");
            break;
           case 8: printf("eight");
            break;
            case 9: printf("nine");
            break;
           case 10: printf("ten");
            break;
            case 11: printf("eleven");
            break;
           case 12: printf("tweleve");
            break;
            case 13: printf("thirteen");
            break;
           case 14: printf("fourteen");
            break;
            case 15: printf("quarter");
            break;
            case 16: printf("sixteen");
            break;
           case 17: printf("seventeen");
            break;
            case 18: printf("eightteen");
            break;
            case 19: printf("nineteen");
            break;
            case 20: printf("twenty");
            break;
            case 21: printf("twenty one");
            break;
            case 22: printf("twenty two");
            break;
            case 23: printf("twenty three");
            break;
            case 24: printf("twenty four");
            break;
            case 25: printf("twenty five");
            break;
            case 26: printf("twenty six");
            break;
            case 27: printf("twenty seven");
            break;
            case 28: printf("twenty eight");
            break;
            case 29: printf("twenty nine");
            break;
            case 30: printf("half");
            break;
    }
        
}

int h,m;

main()
{
    scanf("%d",&h);
    scanf("%d",&m);
    
    if (m==0)
    {
        result(h);
        printf(" o' clock");
    } else if (m==1)
    {
        result (m);
        printf(" minute past ");
        result(h);
    } else if (m == 15 || m == 30)
    {
        result(m);
        printf(" past ");
        result(h);
    }  else if(m==45)
    {
        result(15);
        printf(" to ");
        result(h+1);
    }  
    else if ( m >= 31 )
    {
        result(60-m);
        printf(" minutes to ");
        result(h+1);
    }
    else
    {
        result(m);
        printf(" minutes past ");
        result(h);
    }
    
    
}
