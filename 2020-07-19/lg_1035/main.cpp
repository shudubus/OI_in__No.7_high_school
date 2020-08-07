#include <cstdio>

int main()
{
    int m = 0,
        n = 1;
    scanf( "%d", &m );
    double s = 1;
    while( m >= s )
    {
        n++;
        s = s + 1.0/n;
    }
    printf( "%d", n );
    return 0;
}