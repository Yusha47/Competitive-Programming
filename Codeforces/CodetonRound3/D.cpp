#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define MAX 10000
#define mp make_pair
#define pb push_back

#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1; i<=n; i++)
#define repSe(i,st,end) for(int i=st;i<end;i++)
#define repS0(i,st,end) for(int i=st;i>0;i--)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

#define MOD 1000000007
#define MX 105
using namespace std;


int gcd(int a,int b)
{
    if(a<b)
        return gcd(b,a);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int BFS(int x, map<int, vector<int> > G)
{
    queue<int> q;
    q.push(x);
    vis[x]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<G[u].size(); i++)
        {
            int d=G[u][i];
            if(!vis.count(d))
            {
                vis[d]=vis[u]+1;
                q.push(d);
            }
        }

    }

}

void dfs(int u)
{
    if(u!=src || chk!=-1)
        vis[u]=true;
    chk=1;
    int ul=adj[u].size();
    for(int i=0; i<ul; i++)
    {
        int v=adj[u][i];
        if(!vis[v])
            dfs(v);
    }
    return;
}

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve ()
{

}

int32_t main()
{
    fast;

    ll t;


    while(t--)
    {
        solve();
    }
    return 0;
}

