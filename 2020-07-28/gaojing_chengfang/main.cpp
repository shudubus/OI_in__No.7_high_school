#include<cstdio>

#define smax 110

int main ()
{
    int a[smax+1] = {0};/*数组，存放结果*/
    int la;
    int x = 0;
    scanf( "%d", &la );

    int i;
    a[0] = 2;

    while( x < la-1 ) /*进行高精度计算*/
    {
        i = 0;
        while( i < smax )
        {
            a[i] = a[i]*2;
            i++;
        }

        i = 0;
        while( i < smax )
        {
            a[i+1] = a[i+1] + a[i]/10;
            a[i] = a[i]%10;
            i++;
        }

        x++;

    }

    i = smax;
    while( i > 0 )
    {
        if( a[i] != 0 )
        {
            break;
        }
        i--;
    }

    while( i >= 0 )    /*打印结果*/
    {
        printf( "%d", a[i] );
        i--;
    }
    return 0;

}

