#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main ()
{
    int a[202],b[202],c[202],la,lb,lc,x=0;  //����a,b��������  c�������
    char a1[2000],b1[2000];   //���������Լ����е�����
    gets(a1);
    gets(b1);
    la=strlen(a1);
    lb=strlen(b1);
    for(int i=0;i<=la-1;i++)     //���е���a
    {
        a[la-i]=a1[i]-'0';
    }
    for (int j=0;j<=lb-1;j++)   //���е���b
    {
        b[lb-j]=b1[j]-'0';
    }

    lc=1;

    while(lc<=la||lc<=lb)  //���мӷ���λ
    {
        if(a[lc]<b[lc])
        {
            a[lc]+=10;//��λ
            a[lc+1]--;//��һλ��1
        }
        c[lc]=a[lc]-b[lc];//��Ӧλ���
        lc++;
    }

    c[lc]=x;

    while(c[lc]==0)  //ע�����λΪ0Ҫ����
    {
        lc--;
    }

    for(int k=lc;k>=1;k--)   //ע�����������е����ǵ����
    {
        printf( "%d", c[k] );
    }

    return 0;
}
