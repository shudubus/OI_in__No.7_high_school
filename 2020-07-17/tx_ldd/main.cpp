#include <cstdio>
#include <cstring>
int j = 0;
inline void putint( int x )
{
    static char s[6];
    register int cnt = 0;
    do s[cnt++] = x % 10; while (x /= 10);
    while (cnt--) putchar(s[cnt] + '0');
}

int ldd( int *b, int i1  )
{
    int a[1000];
    int i = 0,
        k = i1;
    while( i < k )
    {
        putchar( 'A' );

        if (b[i] <= a[j]) a[j] = b[i];
        else
        {
             int j1 = 0,
                 z = 0;
             while( j1 < j )
             {
                 putchar( 'B' );
                 if( b[i] <= a[j1] ) z = 1, a[j1] = b[i];
                 j1++;
             }
             if( z == 0 )  j++, a[j] = b[i];
        }
        i++;
    }
    putint( j );

}

int main()
{
    int a[1000] = {0};
    int i = 0;
    while( scanf( "%d", &a[i] ) ) i++;

    ldd( a, i );
    return 0;
}
