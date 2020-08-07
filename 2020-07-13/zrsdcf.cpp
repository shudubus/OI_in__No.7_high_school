#include<bits/stdc++.h>
using namespace std;
int n;
int a[10001];
int sum=0;
void print(int step)
{
    sum++;
    cout<<n<<"=";
    for(int i=1;i<step;i++)
        cout<<a[i]<<"+";
    cout<<a[step]<<endl;
}
void searchh(int s,int step)
{
    for(int i=a[step-1];i<=s;i++)//当前数i要大于等于前1位数，且不超过n
    {
        if(i<n)
        {
            a[step]=i;
            s-=i;
            if(s==0) print(step);
            else searchh(s,step+1);
            s+=i;
 
        }
    }
}
int main()
{
    for(int i=0;i<=10000;i++)
        a[i]=1;
    cin>>n;
 
    searchh(n,1);
    return 0;
}
