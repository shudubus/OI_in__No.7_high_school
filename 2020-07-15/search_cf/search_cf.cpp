#include<cstdio>
#include<cstring>

int a[25];
int c;

int search(int n,int w)
{
        if( a[w-1] > n )  return 0;

        int i = a[w-1];
        while(  i <= n )
        {
            n -= i;
            a[w] = i;
            if( !n && i != c )
            {
                printf( "%d=", c );
                int j=1;

                while( j < w )
                {
                    printf( "%d+", a[j] );
                    j++;
                }

                printf( "%d\n", i );
                return 0;
            }
            else
            {
                search( n, w+1 );
            }
            n=n+i;
            i++;
        }

}

int main()
{
    a[0]=1;
    scanf( "%d", &c );
    search( c, 1 );
}
