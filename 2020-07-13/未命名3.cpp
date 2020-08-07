#include<bits/stdc++.h>
using namespace std;
int n,r;
int vis[30]={0};
int a[30];
void print()
{
    for(int i=1;i<=r;i++)
        cout<<"  "<<a[i];
    cout<<endl;
}
void searchh(int step)
{
    for(int i=a[step-1];i<=n;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            a[step]=i;
            if(step==r) print();
            else searchh(step+1);
            vis[i]=0;
        }
    }
}
int main()
{
    cin>>n>>r;
    a[0]=1;
    searchh(1);
    return 0;
}

