#include <cstdio>
#include <cstring>

const int M = 0,
        N = 1;
int s, t, S;
char tmap[100][100] = {0};

int smap[100][100] = {0};

int a[2][4] = {
        /*m, ��*/{ 1, 0, 0,-1 },
        /*n, ��*/{ 0, 1,-1, 0 }
        /*����ֱ����ҡ��¡��ϡ���*/
};

int x1, y1, x2, y2;

inline void putint( int x )
{
    static char s[6];
    register int cnt = 0;
    do s[cnt++] = x % 10; while (x /= 10);
    while (cnt--) putchar(s[cnt] + '0');
}

inline void putstring( char *x )
{
    int len = strlen( x );
    int i = 0;
    while( i<len )
    {
        putchar( x[i] );
        i++;
    }
}

int sprintf()
{
    int i = 0,
            j = 0;
    while( i < s )
    {
        j = 0;
        while( j < s )
        {
            putint( smap[i][j] );
            putchar( ' ' );
            j++;
        }
        putchar( '\n' );
        i++;
    }
    putchar( '\n' );
}

int sscanf()
{
    int i = 0,
            j = 0;
    while( i < s )
    {
        j = 0;
        scanf ( "%s", tmap[i] );
        while( j < s )
        {
            if ( tmap[i][j] == '*' ) smap[i][j] = 0;
            else if ( tmap[i][j] == '#' ) smap[i][j] = 1;
            j++;
        }
        i++;
    }
}

int ssearch( int m, int n )
{
    int i = 0;
    while( i < 3 )
    {
        const int x = m + a[M][i],
                y = n + a[N][i];
        if(( x >= 0 && x < s ) &&
           ( y >= 0 && y < s ) &&
           smap[x][y] == 0   )
        {
            smap[x][y] = 2;

            if( x == x2 && y == y2 ) t++;
            else ssearch( x, y );

            smap[x][y] = 0;
        }
        i++;
    }
}

int pd()
{
    if( t != 0 ) putstring( "Yes" );
    else putstring( "No" );
    //printf( "%d", t );
}

int main()
{
    //freopen("pro_in.txt","r",stdin);
    //freopen("pro_out.txt","w",stdout);
    scanf( "%d", &S );
    int i = 0;
    while( i < S )
    {
        scanf( "%d", &s );
        sscanf();
        scanf( "%d%d%d%d", &x1, &y1, &x2, &y2 );
        ssearch( x1, y1 );
        pd();
        i++;
    }

}
