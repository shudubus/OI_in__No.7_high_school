#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a1[2000],b1[2000];//���������Լ����е�����
int main ()
{
    freopen("sub.in","r",stdin);
	freopen("sub.out","w",stdout);
    int a[1000] = {0},
        b[1000] = {0},
        c[1000] = {0},
        d[1000] = {0},
        la,lb,lc,x=0;  //����a,b��������  c�������

    gets(a1);
    gets(b1);
    la=strlen(a1);
    lb=strlen(b1);

    for ( int i=0; i<=la-1; i++ )     //���е���a
    {
        a[la-i] = a1[i]-'0';
    }

    for ( int j=0; j<=lb-1; j++ )   //���е���b
    {
        b[lb-j] = b1[j]-'0';
    }

    lc=1;

    int _____ = 0;

    for ( int i=0; i < lb; i++ )   //ע�����������е����ǵ����
    {
        if( a[i] <= b[i] )
        _____++;
    }

    if( la < lb || _____ >= 1 )
    {
        for ( int k=1; k<=lb; k++ )   //ע�����������е����ǵ����
        {
            d[k] = a[k];
        }
        for ( int k=1; k<=lb; k++ )   //ע�����������е����ǵ����
        {
            a[k] = b[k];
        }
        for ( int k=1; k<=lb; k++ )   //ע�����������е����ǵ����
        {
            b[k] = d[k];
        }
    }


    while ( lc <= la || lc <= lb )  //���мӷ���λ
    {
        if( a[lc] < b[lc] )
        {
            a[lc] += 10;//��λ
            a[lc+1]--;//��һλ��1
        }
        c[lc] = a[lc] - b[lc];//��Ӧλ���
        lc++;
    }

    c[lc] = x;

    while( c[lc] == 0 )  //ע�����λΪ0Ҫ����
    {
        lc--;
    }

    for ( int k=lc; k>=1; k-- )   //ע�����������е����ǵ����
    {
        printf( "%d",c[k] );
    }

    return 0;
}
