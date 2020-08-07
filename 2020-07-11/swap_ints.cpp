#include<cstdio>

int swap( int *x, int *y )
{
    int z = *x;
    *x = *y;
    *y = z;
}

int game()
{
    int a[10], b[10];

    int i = 0;

    while( i < 10 )
    {
        scanf( "%d", &a[i] );
        i++;
    }

    i = 0;

    while( i < 10 )
    {
        scanf( "%d", &b[i] );
        i++;
    }

    i = 0;

    while( i < 10 )
    {
        swap( &a[i], &b[i] );
        i++;
    }
    printf( "\n" );
    i = 0;

    while( i < 10 )
    {
        printf( "%d ", a[i] );
        i++;
    }
    printf( "\n" );
    i = 0;

    while( i < 10 )
    {
        printf( "%d ", b[i] );
        i++;
    }
    printf( "\n" );
}

int main()
{
    game();
}
