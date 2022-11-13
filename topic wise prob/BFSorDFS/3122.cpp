#include<bits/stdc++.h>
using namespace std;
int r,c;
#define cln(a) memset(a,0,sizeof a)
int dx[]= {+1,-1,0,0};
int dy[]= {0,0,-1,+1};
#define uu first
#define vv second
#define pii pair<int,int>
#define sz 10000
int vis[sz][sz],cost[sz][sz],d[sz][sz];
queue<pii>q;
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

int main()
{

    while(scanf("%d %d",&r,&c) &&r &&c)
    {
        cln(cost);
        cln(vis);
        cln(d);
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
    return 0;
}
