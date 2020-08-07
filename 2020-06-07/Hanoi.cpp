#include<cstdio>
#include<shudu>
int print( int n, char a, char b )
{
    printf( "Move: %d   From %c to %c", n, a, b );
}

int hanoi( int n, char a, char b, char c )
{
    if( n == 0 )
        return 0;
    //else
   // {
         hanoi( n-1, a, c, b );
         print( n, a, c );
         hanoi( n-1, b, a, c );
   // }

}

int game()
{
    int n;
    char a, b, c;
    //scanf( "%d", &n  );
    scanf( "%s%s%s",&a,&b,&c );
    //std::cin>>n>>a>>b>>c;
    hanoi( n, a, b, c );
    //print( n, a, c );
    //print(  )
}

int main()
{
    game();
}
