#include <cstdio>

char number[17]= {'0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'  };

int _10ton( int num, int n )
{
    int t;
    t = num%n;
    num = num/n;

    if ( num != 0 ) _10ton ( num, n );

    printf ( "%c", number[t] );
}
