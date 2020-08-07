#include<cstdio>
int a[2][2][2][2] =
{
    0
};

int main()
{
	int a = b = c = d = 0;
	a = 0;
	while( a < 2 )
    {
        b = 0;
        while( b < 2 )
        {
            c = 0;
            while( c < 2 )
            {
                d = 0;
                while( d < 2 )
                {
                    printf( "%d", a[a][b][c][d] );
                    d++;
                }
                printf( "\n" );
                c++;
            }
            printf( "\n" );
            b++;
        }
        printf( "\n" );
        a++;
    }

}
