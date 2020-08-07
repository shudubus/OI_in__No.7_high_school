#include <cstdio>
int fib( int n )
{
	
	if ( n == 1 ) return 1;
	if ( n == 2 ) return 1;
	else return fib( n-1 )  + fib( n-2 );
}

int game()
{
	int fibnum;
	int x;
	scanf ( "%d", &fibnum );
	x = fib( fibnum );
	printf ( "%d", x );
}

int main()
{
	game();
}
