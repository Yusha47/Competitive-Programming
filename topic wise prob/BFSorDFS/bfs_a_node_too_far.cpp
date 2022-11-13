#include<bits/stdc++.h>
using namespace std;

#define mh main
#define pb push_back
#define it insert
#define endl '\n'
#define LL long long int
#define ULL unsigned LL
#define f(i, a) for(int i=0; i<a; i++)
#define F(i, a, b) for(int i=a; i<b; i++)
#define rep(i, a, b) for(int i=a; i>=b; i--)
#define MX 1e5+5

map<int, int> vis;

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


int mh()
{
    int nc, nt=0;
    while(cin>>nc)
    {
        if(nc==0)
            break;
        map<int, vector<int> > adj;

        int x, y;
        for(int i=0; i<nc; i++)
        {
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }

        int source, ttl;
        while(scanf("%d%d", &source, &ttl)==2)
        {
            if(source==0 && ttl==0)
                break;

            map<int, int>::iterator it;
            vis.clear();
            BFS(source, adj);
            int cnt=0;

            for(it=vis.begin(); it!=vis.end(); ++it)
            {
                if((*it).second>ttl)
                    ++cnt;
            }

            int ans=cnt+adj.size()-vis.size();

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++nt, ans, source, ttl);
        }
    }
    return 0;
}
