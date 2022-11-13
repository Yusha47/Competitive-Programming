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


int n, m,sx,sy;

int adjX[]= {1,-1,0,0};
int adjY[]= {0,0,1,-1};
#define uu first
#define vv second
#define pii pair<int,int>
#define sz 1000
int vis[sz][sz];
char d[sz][sz];
int cost[sz][sz];
int count1;
queue<pii>q;
int dx[]= {+1,-1,0,0};
int dy[]= {0,0,-1,+1};
int r,c;
int ans[500+5][500+5];

int bfs(int a,int b)
{

    int vx,vy;
    vis[a][b]=1;
    q.push(pii(a,b));
    while(!q.empty())
    {
        pii u=q.front();
        q.pop();

        for(int i=0; i<4; i++)
        {
            vx=u.uu+dx[i];
            vy=u.vv+dy[i];
            if(vx>=0 &&vx<r &&(vy>=0 &&vy<c))
            {

                if(d[vx][vy]!='#')
                {

                    if(vis[vx][vy]==0)
                    {

                        count1++;



                        if(d[vx][vy]=='C')
                        {
                            ans[sx][sy]++;


                        }
                        q.push(make_pair(vx,vy));

                    }
                }

            }

        }
    }
    return  count1;
}

void solve()
{
    int q;
    cin>>r>>c>>q;

    CLR(vis);
    CLR(d);
    SET(cost);


    for(int i=0; i<r; i++)
    {

        for(int j=0; j<c; j++)
        {
            cin>>d[i][j];

        }
    }

    while(q--)
    {
        count1=0;
        CLR(vis);
        scanf("%d %d",&sx,&sy);
        if(cost[sx-1][sy-1]==-1)
        {
            bfs(sx-1,sy-1);
            cost[sx-1][sy-1]=count1;
            printf("%d\n",count1);
            for(int i=0; i<r; i++)
                for(int j=0; j<c; j++)
                    if(vis[i][j])cost[i][j]=count1;
        }
        else printf("%d\n",cost[sx-1][sy-1]);


    }




    return ;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    for (int t = 1; t <= tc; t++)
    {
        cout <<"Case "<<t<<":"<<"\n";
        solve();
    }
}


