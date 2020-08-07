#include<cstdio>
#include<cstring>

int main ()
{
    int a[202],
        b[202],
        c[202];/*数组，分别存放高精度加数，和*/
    int la,lb,lc;
    int x = 0;
    char a1[2000],
         b1[2000];
    gets(a1);
    gets(b1);
    la=strlen(a1);
    lb=strlen(b1);

    int i = 0;

    while( i <= la-1 )    /*将字符a串转存为数组*/
    {
        a[la-i] = a1[i]-'0';
        i++;
    }

    int j = 0;

    while( j <= lb-1 )    /*将字符b串转存为数组*/
    {
        b[lb-j]=b1[j]-'0';
        j++;
    }

    lc=1;
    while( lc<=la || lc<=lb ) /*进行高精度的加法计算*/
    {
        c[lc] = a[lc]+b[lc]+x;
        x = c[lc]/10;
        c[lc] %= 10;
        lc++;
    }

    c[lc]=x;
    while( c[lc] == 0 )  /*处理最高位是零的特殊情况*/
    {
        lc--;
    }

    int k = lc;
    while( k >= 1 )    /*打印结果*/
    {
        printf( "%d", c[k] );
        k--;
    }
    return 0;
}
