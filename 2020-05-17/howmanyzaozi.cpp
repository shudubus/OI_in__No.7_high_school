#include <cstdio>
int zaozi( int stunum, int zzs )
{
	
	if ( stunum == 1 ) return zzs;
	else return zaozi( stunum-1, zzs*2+1 );
}

int game()
{
	int stn, zz, zzs;
	scanf ( "%d%d", &stn, &zz );
	zzs = zaozi( stn, zz );
	printf ( "%d", zzs );
}

int main()
{
	game();
}