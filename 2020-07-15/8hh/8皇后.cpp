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

int a[30],
    b[30],
    c[30],
    d[30];
int x=0;
void print()
{
    x++;
    putstring( "No. " );
    putint( x );
    putchar( '\n' );
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
        {
            if(a[j]==i)
                putstring( "1 " );
            else
                putstring( "0 " );
        }
        putchar( '\n' );
    }
}
void searchh(int i)
{
    for(int j=1;j<=8;j++)
    {
        if((!b[j])&&(!c[i+j])&&(!d[i-j+7]))
        {
            a[i]=j;
            b[j]=1;
            c[i+j]=1;
            d[i-j+7]=1;
            if(i==8) print();
            else searchh(i+1);
            b[j]=0;
            c[i+j]=0;
            d[i-j+7]=0;
        }
    }
}
int main()
{
    searchh(1);
    return 0;
}

