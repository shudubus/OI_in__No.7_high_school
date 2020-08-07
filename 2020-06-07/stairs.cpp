#include<cstdio>
int stairs( int asdf )
{
    if ( asdf == 1 || asdf == 2 ) return asdf;
    else return stairs( asdf-1 ) + stairs( asdf-2 );
}

int main()
{
    int i;
    while( scanf( "%d", &i ) != EOF )
    {
        printf( "%d\n", stairs( i ) );
    }
}
