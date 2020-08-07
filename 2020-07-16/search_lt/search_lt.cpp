#include<cstdio>

int dx[4] = {-2, -1, 1, 2},
    dy[4] = { 1,  2, 2, 1};
int a[9][4]={0};
int xx,yy;
int ssearch( int i )
{
    int t = 0;
	while( t <= 3 )
	{
		xx=a[i-1][1]+dx[t];
		yy=a[i-1][2]+dy[t];
		if( 0 <= xx && xx <= 4 && 0 <= yy && yy <= 8 )
		{
			a[i][1]=xx;
			a[i][2]=yy;
			if( xx == 4 && yy == 8 )
			{
			    int k = 2;
				while( k <= i )
                {
                    printf( "%d,%d -> ",a[k][1],a[k][2] );
                    k++;
                }

				putchar( '\n' );
			}
			else
			{
				ssearch(i+1);
			}
		}
		t++;
	}
}
int main()
{
	a[1][1]=0;
	a[1][2]=0;
	freopen("search_tm__in.txt","r",stdin);
	freopen("search_tm__out.txt","w",stdout);
	ssearch(2);
	return 0;
}
