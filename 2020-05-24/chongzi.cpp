#include<cstdio>

long long a[1000],
          b[1000];

int chongzi( long long x, long long y, long long z )
{
    long long i;

    i = 1;

    while( i <= x )
    {
        a[i] = 1;
        b[i] = 0;
        i++;
    }

    i = x+1;

    while( i<=z+1 )
    {

        b[i] = y * a[i-x];
        a[i] = a[i-1] + b[i-2];
        i++;
    }
}

int main( int argc, char**argv )
{
    long long x, y, z;
    scanf( "%lld%lld%lld", &x, &y, &z );
    chongzi( x, y, z );
    printf( "%lld", a[z+1] );
}
