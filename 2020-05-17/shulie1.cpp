#include <cstdio>
int fib( int n )
{
	
	if ( n == 1 ) return 1;
	if ( n == 2 ) return 1;
	if ( n == 3 ) return 2;
	else return 3*fib( n-1 )  + 2*fib( n-2 ) + fib( n-3 );
}

int game()
{
	int fibnum;
	int x, i=1;
	while( i<10+1 )
	{
		x = fib( i );
		printf ( "%d", x );
		i++;
		printf( "," );
	}
	
}

int main()
{
	game();
}
