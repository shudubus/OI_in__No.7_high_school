#include<iostream>
#include<cstdio>
using namespace std;
#define ll long long
int x, y, z;
ll a[55], b[55];
int main(){
    scanf("%d%d%d", &x, &y, &z);
    for (int i = 1; i <= x; ++i)
        a[i] = 1, b[i] = 0;            //��һ��x�µĳɳ�����
    for (int i = x + 1; i <= z + 1; ++i)
    {
        b[i] = y*a[i - x];        //��i�µ��׳�ֻ��i-z��ǰ�ĳɳ��й�
        a[i] = a[i - 1] + b[i - 2];//��i���µĳɳ�ֻ��i-1�ĳɳ��i-2���׳��йء�
    }
    printf("%lld\n", a[z + 1]);//����z����
}
