#include<cstdio>

int swap( int *x, int *y )
{
    int z = *x;
    *x = *y;
    *y = z;
}

int game()
{
    int a, b;
    scanf( "%d %d", &a, &b );

    swap( &a, &b );

    printf( "%d %d", a, b );
}

int main()
{
    game();
}
