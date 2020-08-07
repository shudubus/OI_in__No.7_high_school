#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a1[2000],b1[2000];//方便输入以及进行倒序用
int main ()
{
    freopen("sub.in","r",stdin);
	freopen("sub.out","w",stdout);
    int a[1000] = {0},
        b[1000] = {0},
        c[1000] = {0},
        d[1000] = {0},
        la,lb,lc,x=0;  //数组a,b代表被加数  c代表和数

    gets(a1);
    gets(b1);
    la=strlen(a1);
    lb=strlen(b1);

    for ( int i=0; i<=la-1; i++ )     //进行倒序a
    {
        a[la-i] = a1[i]-'0';
    }

    for ( int j=0; j<=lb-1; j++ )   //进行倒序b
    {
        b[lb-j] = b1[j]-'0';
    }

    lc=1;

    int _____ = 0;

    for ( int i=0; i < lb; i++ )   //注意存放在数组中的数是倒序的
    {
        if( a[i] <= b[i] )
        _____++;
    }

    if( la < lb || _____ >= 1 )
    {
        for ( int k=1; k<=lb; k++ )   //注意存放在数组中的数是倒序的
        {
            d[k] = a[k];
        }
        for ( int k=1; k<=lb; k++ )   //注意存放在数组中的数是倒序的
        {
            a[k] = b[k];
        }
        for ( int k=1; k<=lb; k++ )   //注意存放在数组中的数是倒序的
        {
            b[k] = d[k];
        }
    }


    while ( lc <= la || lc <= lb )  //进行加法进位
    {
        if( a[lc] < b[lc] )
        {
            a[lc] += 10;//借位
            a[lc+1]--;//上一位减1
        }
        c[lc] = a[lc] - b[lc];//对应位相减
        lc++;
    }

    c[lc] = x;

    while( c[lc] == 0 )  //注意最高位为0要舍弃
    {
        lc--;
    }

    for ( int k=lc; k>=1; k-- )   //注意存放在数组中的数是倒序的
    {
        printf( "%d",c[k] );
    }

    return 0;
}
