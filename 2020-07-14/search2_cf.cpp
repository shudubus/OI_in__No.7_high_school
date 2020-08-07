#include <cstdio>

int a[10001] = {1};
int n, t;

int ssearch( int k )
{
	int i = a[k-1]+1;
	while( i <= end )
	{
		a[k] = i;
		b[i] = 1;
		if( k == num )
		{
			int j = 1;
			while( j <= num )
			{
				printf( "  %d", a[j] );
				j++;
			}
			printf( "\n" );
		}

		else
		{
			ssearch( k+1 );
		}
		i++;
	}
}



int main()
{

}
