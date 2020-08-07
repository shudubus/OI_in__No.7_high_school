#include <cstdio>
int tree( int stunum, int trees )
{
	
	if ( stunum == 1 ) return trees;
	else return tree( stunum-1, trees*2+1 );
}

int game()
{
	int stn, tre, tres;
	scanf ( "%d%d", &stn, &tre );
	tres = tree( stn, tre );
	printf ( "%d", tres );
}

int main()
{
	game();
}
