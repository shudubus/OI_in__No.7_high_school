#include <cstdio>
#include <cstring>

int ctoi( char *ta[], int *a[] )
{
    int la = strlen(*ta);
    int i = 0;
    while( i < la )
    {
        *a[la-i] = *ta[i] - '0';
        i++;
    }
}

int main()
{
    char ta[100]  = {0},
         tb[100]  = {0};
    int  a[100]   = {0},
         b[100]   = {0},
         c[10000] = {0};

    scanf( "%s", ta );
    scanf( "%s", tb );

    ctoi( &ta, &a );
    ctoi( &tb, &b );
    return 0;
}