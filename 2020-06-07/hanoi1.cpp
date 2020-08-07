#include<cstdio>

int print( int n, char a, char b )
{
    printf( "%c->%d->%c\n", a, n, b );
}

int hanoi( int n, char a, char b, char c )
{
    if( n == 0 )
        return 0;
    else
	{
         hanoi( n-1, a, c, b );
         print( n, a, c );
         hanoi( n-1, b, a, c );
	}

}

int game()
{
    int n;
    char a, b, c;
    scanf( "%d", &n  );
    scanf( " %c %c %c", &a, &c, &b );
    hanoi( n, a, b, c );
}

int main()
{
    game();
}
