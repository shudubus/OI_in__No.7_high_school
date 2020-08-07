#include <cstdio>
#include <cstring>
int pow( int a, int b )
{
    int i = 1;
    while( i < b )
    {
        a = a*a;
        i++;
    }
    return a;
}

int main()
{
    char ta[100]  = {0},
         tb[100]  = {0};
    int  a[100]   = {0},
         b[100]   = {0},
         c[100]   = {0},
         d[10000] = {0};

    scanf( "%s", ta );
    scanf( "%s", tb );

    int la = strlen(ta),
        lb = strlen(tb);

    int i = 0;
    while( i < la )
    {
        a[la-i-1] = ta[i] - '0';
        i++;
    }

    i = 0;
    while( i < lb )
    {
        b[la-i-1] = tb[i] - '0';
        i++;
    }

    i = 0;
    while( i < lb )
    {
        int j = 0;
        while( j < la  )
        {
            c[j] = c[j]+a[j]*b[i];
            printf( "a=%d, b=%d, i=%d\n", a[j], b[i], j );
            j++;
        }

        j = 0;
        while( j < la )
        {
            if( c[j] > 9 )
            {
                c[j+1] = c[j+1] + c[j]/10;
                c[j] = c[j]%10;
            }
            j++;
        }

        i++;
    }

    i = 0;
    while( i < 100 )
    {
        d[i] = c[i]*pow( 10, i+1 );
        printf( "pow(%d, %d) = %d", 10, 2, pow(10, 2) );
        i++;
    }

    i = 100;
    while( i > 0 )
    {
        if( c[i] != 0 )
        {
            break;
        }
        i--;
    }

    while( i >= 0 )    /*打印结果*/
    {
        printf( "%d", c[i] );
        i--;
    }
    return 0;
}