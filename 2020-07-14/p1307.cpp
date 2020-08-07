#include <cstdio>
#include <cmath>
int ilen(long int x)
{
	int leng=0;
	while(x)
	{
		x/=10;
		leng++;
	}
	return leng;
}

long long int ipow( long long int x, int y )
{
    int i = 1;
    while( i < y )
    {
        x = x*x;
        i++;
    }
    return x;
}

int game()
{
    long int a;
    scanf( "%ld", &a );

    int b = ilen( a );
    int a1[b] = {0};

    int i = 1;
    a1[0] = a/ipow( 10, b );
    while( i < b )
    {
        a1[i] = a/ipow( 10, b-i )%10;
        i++;
    }

    i=0;

    while( i < b )
    {
        printf( "%d", a1[i] );
        i++;
    }

    i = b;
    if( a1[b] = 0 )
        i--;
}

int main()
{
    game();
    return 0;
}
