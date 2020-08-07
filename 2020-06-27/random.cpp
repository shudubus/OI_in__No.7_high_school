#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int is_rndm( int nums[], int n )
{
    int i = 0,
        j = 0;
    while( i < n-1 )
    {
        if ( nums[i] > nums[i+1] )
            j++;

        i++;
    }
    return j == 0;
}

int print( int n, int m[] )
{
    int i=0;
    int n1 = n;
    while( i<n )
    {
        if ( m[i] == m[i+1] )
            n1--;
        i++;
    }

    printf( "%d\n", n1 );
    i = 0;
    while( i<n )
    {
        printf( "%d ", m[i] );
        if ( m[i] == m[i+1] )
            i = i+2;
        else
            i++;
    }

}

int game()
{
    int n;
    scanf( "%d", &n );
    int nums[n];

    int i=0;
    while( i<n )
    {
        scanf( "%d", &nums[i] );
        i++;
    }


    int c;
    while( ! is_rndm( nums, n ) )
    {
        i = 0;
        while( i<n-1 )
        {
            if( nums[i] > nums[i+1] )
            {
                c         = nums[i];
                nums[i]   = nums[i+1];
                nums[i+1] = c;
            }i++;
        }

    }

    i = 0;

    print ( n, nums );
}

int main ()
{
    freopen("random.in","r",stdin);
	freopen("random.out","w",stdout);
    game();
    return 0;
}
