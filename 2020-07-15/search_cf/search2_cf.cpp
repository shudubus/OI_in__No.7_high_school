#include<cstdio>
#include<cstring>

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

int a[25];
int c;

int search(int n,int w)
{
        if( a[w-1] > n )  return 0;

        int i = a[w-1];
        while(  i <= n )
        {
            n -= i;
            a[w] = i;
            if( !n && i != c )
            {
                putint( c );
                putchar( '=' );
                int j=1;

                while( j < w )
                {
                    putint( a[j] );
                    putchar( '+' );
                    j++;
                }
                putint( i );
                putchar( '\n' );
                return 0;
            }
            else
            {
                search( n, w+1 );
            }
            n=n+i;
            i++;
        }

}

int main()
{
    a[0]=1;
    scanf( "%d", &c );
    search( c, 1 );
}
