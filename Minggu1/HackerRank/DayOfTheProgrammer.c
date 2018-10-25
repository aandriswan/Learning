#include <stdio.h>
int jta, year;
int main()
{
    int pd = 256,d;
    scanf ("%d",&year);
    if (year <= 1917)
    {
        if ( year %4 ==0)
        {
            jta = 244;
        } else {
            jta = 243;
        }
    } else if ( year == 1918)
    {
        jta = 230;
    } else
    {
        if( year%4 ==0 )
        {
            jta = 244;
        } else 
        {
            jta = 243;
        }
        if ( year%4 == 0 && year%100 == 0 && year%400 != 0)
        {
            jta = 243;
        }
        if ( year%4 == 0 && year%100 == 0 && year%400 == 0)
        {
            jta = 244;
        }
        
    }
    
    d = pd -jta;
   printf ("%d.09.%d",d,year);
}
