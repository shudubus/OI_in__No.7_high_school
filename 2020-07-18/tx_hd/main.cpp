#include <cstdio>

int n, hdn;
int start[1000],
    finish[1000];

int swap( int *a, int *b )
{
    int c = *a;
    *a = *b;
    *b = c;
}

bool okay( int *c )
{
    int i = 0;
    while( i < n + 1 )
    {
        if(  c[i] > c[i+1] )
        {
            i = 0;
            break;
        }
        i++;
    }
    return i != 0;
}

int px()
{
    int i = 0;
    while( !okay( start ) )
    {
        putchar( 'A' );
        i = 0;
        while( i < n )
        {
            putchar( 'B' );
            if( start[i] > start[i+1] )
            {
                putchar( 'C' );
                swap( &start[i], &start[i+1] );
                swap( &finish[i], &finish[i+1] );
            }
            i++;
        }
    }
}

int hd( int *start, int *finish )
{
    int end = 0;
    int i = 0;
    while( i < n )
    {
        if( start[i] >= end )
        {

            hdn++;
            end = finish[i];
        }
        i++;
    }
    printf( "%d", hdn );
}

int main()
{
    scanf( "%d", &n );
    int i = 0;
    while( i < n )
    {
        scanf( "%d", &start[i] );
        scanf( " %d", &finish[i] );
        i++;
    }
    px();
    hd( start, finish );
    return 0;
}
