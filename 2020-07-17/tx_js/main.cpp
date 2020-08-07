#include<cstdio>

int _size;

inline void putint( int x )
{
  static char s[6];
  register int cnt = 0;
  do s[cnt++] = x % 10; while (x /= 10);
  while (cnt--) putchar(s[cnt] + '0');
}


int print( int *p )
{
    int i = 0;
    while( i < _size-1 )
    {
        putint(  p[i]+1 );
        putchar( ' ' );
        i++;
    }
    putint(  p[i]+1 );

}

int change( int *x, int *y )
{
    int z = *x;
    *x = *y;
    *y = z;
}

bool okay( int *c )
{
    int i = 0;
    while( i < _size + 1 )
    {
        if(  c[i] > c[i+1] )
        {
            i = 0;
            break;
        }
        i++;
    }
    return i == 0;
}

double c( int *c )
{
    double s1 = c[0];
    double s = 0;
    int i = 1;
    while( i < _size )
    {
        s = s + s1;
        s1 = s1 + c[i];
        i++;
    }

    s = s/1.0*_size;
    s = s/100;
    return s;
}

int js( int *a, int *b )
{
    int i = 0;
    while( okay( a ) )
    {

        i = 0;
        while( i < _size )
        {

            if( a[i] > a[i+1] )
            {
                change( &a[i], &a[i+1] );
                change( &b[i], &b[i+1] );
            }
            i++;
        }
    }
    double c1 = c(a);
    print( b );
    putchar( '\n' );
    printf( "%0.2lf", c1 );
}

int main()
{
    scanf( "%d", &_size );
    int a[_size], b[_size];

    int i = 0;
    while( i < _size )
    {
        scanf( "%d", &a[i] );
        b[i] = i;
        i++;
    }

    js( a, b );

    return 0;
}
