#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main ()
{
    int a[202],b[202],c[202],la,lb,lc,x=0;  //数组a,b代表被加数  c代表和数
    char a1[2000],b1[2000];   //方便输入以及进行倒序用
    gets(a1);
    gets(b1);
    la=strlen(a1);
    lb=strlen(b1);
    for(int i=0;i<=la-1;i++)     //进行倒序a
    {
        a[la-i]=a1[i]-'0';
    }
    for (int j=0;j<=lb-1;j++)   //进行倒序b
    {
        b[lb-j]=b1[j]-'0';
    }

    lc=1;

    while(lc<=la||lc<=lb)  //进行加法进位
    {
        if(a[lc]<b[lc])
        {
            a[lc]+=10;//借位
            a[lc+1]--;//上一位减1
        }
        c[lc]=a[lc]-b[lc];//对应位相减
        lc++;
    }

    c[lc]=x;

    while(c[lc]==0)  //注意最高位为0要舍弃
    {
        lc--;
    }

    for(int k=lc;k>=1;k--)   //注意存放在数组中的数是倒序的
    {
        printf( "%d", c[k] );
    }

    return 0;
}
