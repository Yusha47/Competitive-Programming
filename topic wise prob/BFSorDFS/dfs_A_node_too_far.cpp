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

vector<int>adj[MX];
bool vis[MX];
int src, chk;



void dfs(int u,int ttl)
{
    const X=4;
    if(u!=src || chk!=-1)
    {
        vis[u]=true;
        cout<<u<<"->";
        temp--;
        if(ttl==0)
        {

            cout<<endl;
            temp=ttl;
        }


    }


    chk=1;
    int ul=adj[u].size();
    for(int i=0; i<ul; i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {

            dfs(v,ttl);
        }

    }


    return;
}
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve (int n,int e)
{


}

int32_t main()
{
    fast();

    ll t=1;
//    cin>>t;

    int n, tc, kk=1, v, u, q;
    while(cin>>n && n)
    {

        for(int i=0; i<n; i++)
        {
            cin>>u;
            cin>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        while(1)
        {
            int cnt=0;
            cin>>src;
            chk=-1;
            CLR(vis);

            int ttl;
            cin>>ttl;
            if(src==0 && ttl==0)break;
            else
            {
                dfs(src,ttl);
            }
            for(int i=1; i<=n; i++)
            {
                if(!vis[i])
                    cnt++;
            }
            cout<<"Source "<<src<<" "<<"TTL"<<ttl<<" "<<cnt<<endl;
        }
        for(int i=1; i<=n; i++) adj[i].clear();




    }





    return 0;
}



