#include <cstdio>
int kinds;
bool pd( double *p )
{
    int i = 0;
    while ( i < 99 )
    {
        if( p[i] > p[i+1] ) break;
        i++;
    }
    return i == 99;
}

int swap( double *a, double *b )
{
    double c = *a;
    *a = *b;
    *b = c;
}

int jjd( int *weight, int *value, int max )
{
    double a[kinds] = {0};
    int i = 0;
    while ( i < kinds )
    {
        a[i] = 1.0*value[i]/weight[i];
        i++;
    }

    while( pd(a) )
    {
        int j = 0;
        while( j < kinds-1 )
        {
            if( a[j] < a[j+1] ) swap( &a[j], &a[j+1] );
            j++;
        }

    }

    int j = 0, k = 0;
    while( k != max )
    {
        k = k + a[j]*((max-k)/a[j]);
        j++;
    }


}

int main()
{
    int a;
    scanf( "%d", &a );

    int i = 0;
    int max[a];
    int weight[a][100],
            value[a][100];

    while( i < a )
    {
        scanf( "%d", &max[i] );
        scanf( "%d", &kinds );

        int j = 0;
        while( j < kinds )
        {
            scanf( "%d", &weight[i][j] );
            j++;
        }

        j = 0;
        while( j < kinds )
        {
            scanf( "%d", &value[i][j] );
            j++;
        }
        jjd( weight[i], value[i], max[i] );
        i++;
    }

    return 0;
}