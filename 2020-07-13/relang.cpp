#include<bits/stdc++.h>
using namespace std;
int T,C,Ts,Te;
struct NODE
{
    int to;
    int dis;
    int next;
}edge[30000];
int head[30000];
int dis[30000];
int vis[30000];
int cnt;
void add_edge(int from,int to,int dis)
{
    edge[++cnt].next=head[from];
    edge[cnt].to=to;
    edge[cnt].dis=dis;
    head[from]=cnt;
 
}
 
 
void spfa()
{
    queue<int>Q;
    Q.push(Ts);
    vis[Ts]=1;
    dis[Ts]=0;
    while(!Q.empty()){
        int u=Q.front();
        Q.pop();
        vis[u]=0;
        for(int i=head[u];i!=0;i=edge[i].next){
            int to=edge[i].to;
            int di=edge[i].dis;
            if(dis[to]>di+dis[u]){
                dis[to]=dis[u]+di;
                if(!vis[to]){
                    vis[to]=1;
                    Q.push(to);
                }
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin>>T>>C>>Ts>>Te;
    int a,b,c;
    memset(head,0,sizeof(head));
    memset(vis,0,sizeof(vis));
    memset(dis,0x3f3f3f3f,sizeof(dis));
    for(int i=0;i<C;i++){
        cin>>a>>b>>c;
        add_edge(a,b,c);
        add_edge(b,a,c);
    }
    spfa();
    cout<<dis[Te]<<endl;
 
 
}
