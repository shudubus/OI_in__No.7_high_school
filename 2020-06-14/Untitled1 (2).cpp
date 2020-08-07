#include<cstdio>
#include<ctime>

int main()
{

    long long j;
    scanf( "%lld", &j );

    long long i=0;

    double s1 = clock();

    while( i<j )
    {
        i++;
    }

    double s2 = clock();

    printf( "use time: %lf ms", s2-s1 );
}
