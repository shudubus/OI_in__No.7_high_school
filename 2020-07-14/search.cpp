#include <cstdio>

int x, y, n;

int ssearch( int k )
{
	int  a[10001] = {0};
	bool b[10001] = {0};
    int i = 1;
    while( i <= 3 )
    {
        if( ! b[i] )
        {
            a[k] = i;
            b[i] = 1;

            if( k == y ) 
			{
				n++;
				int i1 = 1;
				while( i1 <= y )
				{
					printf( "%d ", a[i] );
					i1++;
				}
			}
            else ssearch( k+1 );
            b[i] = 0;
        }
        i++;
    }
}

int main()
{
	 scanf( "%d%d", &x, &y );
	 ssearch( 1 );
	 printf( "%d", n );
}
