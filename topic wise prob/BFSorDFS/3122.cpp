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
            if(vx>=0 &&vx<2 &&(vy>=0 &&vy<c) &&d[vx][vy]==0)
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
    long long  t;

    cin>>t;

    while(t--)
    {
        cln(d);
        cln(vis);
        cln(cost);
        long long c;
        cin>>c;
        char s[2][c];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>s[i][j];
            }
        }

        bfs(0,1);
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(s[i][j]=='B')
                {
                    d[i][j]<1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }



    }
    return 0;
}
