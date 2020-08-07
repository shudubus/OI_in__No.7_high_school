#include<iostream>
#include<cstdio>
using namespace std;
#define ll long long
int x, y, z;
ll a[55], b[55];
int main(){
    scanf("%d%d%d", &x, &y, &z);
    for (int i = 1; i <= x; ++i)
        a[i] = 1, b[i] = 0;            //第一个x月的成虫数量
    for (int i = x + 1; i <= z + 1; ++i)
    {
        b[i] = y*a[i - x];        //在i月的幼虫只与i-z月前的成虫有关
        a[i] = a[i - 1] + b[i - 2];//第i个月的成虫只与i-1的成虫和i-2的幼虫有关。
    }
    printf("%lld\n", a[z + 1]);//过了z个月
}
