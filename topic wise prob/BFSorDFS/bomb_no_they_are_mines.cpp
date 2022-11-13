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


using namespace std;


#define ar array
#define ll long long

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int n, m;

int adjX[]= {1,-1,0,0};
int adjY[]= {0,0,1,-1};
#define uu first
#define vv second
#define pii pair<int,int>
#define sz 10000
int vis[sz][sz],cost[sz][sz],d[sz][sz];
queue<pii>q;
int dx[]= {+1,-1,0,0};
int dy[]= {0,0,-1,+1};
int r,c;
void bfs(int a,int b)
{
    int vx,vy;
    vis[a][b]=1;
    cost[a][b]=0;
    q.push(pii(a,b));
    while(!q.empty())
    {
        pii u=q.front();
        q.pop();

        for(int i=0; i<4; i++)
        {
            vx=u.uu+dx[i];
            vy=u.vv+dy[i];
            if(vx>=0 &&vx<r &&(vy>=0 &&vy<c) &&d[vx][vy]==0)
            {

                if(vis[vx][vy]==0)
                {

                    vis[vx][vy]=1;
                    d[vx][vy]=1;
                    cost[vx][vy]=cost[u.uu][u.vv]+1;
                    q.push(make_pair(vx,vy));
                }
            }

        }
    }
}

void solve()
{
    while(cin>>r>>c &&r &&c)
    {
        CLR(cost);
        CLR(vis);
        CLR(d);
        int x,r,mine,data;
        cin>>r;
        for(int i=0; i<r; i++)
        {
            cin>>mine>>data;
            while(data--)
            {
                cin>>x;
                d[mine][x]=1;
            }

        }
        int sx,sy,endx,endy;
        cin>>sx>>sy>>endx>>endy;
        bfs(sx,sy);
        printf("%d\n",cost[endx][endy]);
    }
    return ;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    tc = 1;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}
