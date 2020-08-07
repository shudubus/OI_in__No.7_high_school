#include <cstdio>
int a[10];

int sswap( int *x, int *y )
{
    int z = *x;
    *x = *y;
    *y = z;
}

int ssort( int s, int e )
{
    printf( "Working...\n" );
    int m = a[( s + e )/2];
    int i = s, j = e;
    do
    {
        while( a[i] < a[m] )
        {
            i++;
        }
        while( a[i] > a[m] )
        {
            j--;
        }
        if( i <= j )
            sswap( &a[i], &a[j] ),
            i++, j--;

    }while( i <= j );

    if( s < j ) ssort( s, j );
    if( i < e ) ssort( s, j );
    else return 0;

}

int main()
{
    int i = 0;
    while( i<10 )
    {
        scanf( "%d", &a[i] );
        i++;
    }
    ssort( 0, 10 );
    i = 0;
    while( i<10 )
    {
        printf( "%d", a[i] );
        i++;
    }
}
