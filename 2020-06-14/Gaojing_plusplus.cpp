#include<cstdio>
#include<cstring>

int _plus( int *numa, int *numb, int lena, int lenb )
{
    int lenc;

    if ( lena > lenb )
        lenc = lena + 2;
    else
        lenc = lenb + 2;
    int numc[lenc] = {0};
    int i = lenc - 2;

    //////////////////////

    while( i > 0 )
    {

        if( numa[i] < numb[i] )
        {
            numa[i-1]= numa[i-1] - 1;
            numa[i] = numa[i] + 10;
        }
        numc[i] = numa[i] - numb[i];
        i--;
    }


    //////////////////////

    i = lenc - 2;
    while( i > 0 )
    {
        printf( "%d", numc[i] );
        i--;
    }
}

int game()
{
    char a[100] = {0},
         b[100] = {0};
    scanf ( "%s", a );
    printf( "\n" );
    scanf ( "%s", b );

    int lena = strlen(a),
        lenb = strlen(b);

    int numa[lena] = {0},
        numb[lenb] = {0};
    int i=0;
    while( i<=lena )
    {
        numa[i] = a[ lena-i ] - '0';
        i++;
    }

    i=0;
    while( i<=lenb )
    {
        numb[i] = b[ lenb-i ] - '0';
        i++;
    }

    _plus( numa, numb, lena, lenb );

}

int main()
{
    game();
    return 0;
}
