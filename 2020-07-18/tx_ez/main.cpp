#include <cstdio>

int pd( int x )
{
    int s = 0;
    while ( x > 0 )
    {
        if( x%2 == 1 )
            s++;
        x/=2;
    }
    return s;
}

int _find( int n )
{
    int i = n+1;
    while ( 1 )
    {
        if( pd( n ) == pd( i )) break;
        i++;
    }
    printf( "%d\n", i );

}

int main( int argc, char **argv )
{
    int n;
    do
    {
        scanf( "%d", &n );
        if( n == 0 ) goto dd;
        _find(n);
    }while(1);
dd:
    return 0;
}
