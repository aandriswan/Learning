#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char a[100],b[100];
int n,z,r,c;

int main()
{
    gets(a);
    int i,j,k;
    n=strlen(a);
    for(i=0,j=0;i<n;i++,j++)
     {            
            b[j]=a[i];           
    }   
    float p;
    p= sqrt(n);
    r= floor(p);   
    c= ceil(p);   
    if((n)>r*c)
       r=r+1;
    char d[r][c];
    k=0;  
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
         {
               if(k>=n)
                   d[i][j]=0;
            else
            {
                d[i][j]=b[k];            
                k++;
            }
        }        
    }       
    for(i=0;i<c;i++)
     {
        for(j=0;j<r;j++)
         {  
            if(d[j][i]!=0)
                printf("%c",d[j][i]);
        }        
        printf(" ");
    }
    return (0);

}
