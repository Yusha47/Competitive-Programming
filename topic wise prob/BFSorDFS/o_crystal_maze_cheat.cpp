#include <stdio.h>
#include <string.h>
char maze[505][505];
bool visit[505][505];
int cost[505][505];
int count,r,c,Q;
int x_axis[4]= {1,-1,0,0};
int y_axis[4]= {0,0,1,-1};
void dfs(int sx,int sy)
{
    if(maze[sx][sy]=='C') count++;
    visit[sx][sy]=true;
    for(int i=0; i<4; i++)
    {
        int nx=sx+x_axis[i];
        int ny=sy+y_axis[i];
        if(nx>=0 && nx<r && ny>=0 && ny<c && maze[nx][ny]!='#' && !visit[nx][ny])
        {
            dfs(nx,ny);
        }
    }
}
int main()
{
    int T;
    cin>>t;

    for(int t=1; t<=T; t++)
    {
        scanf("%d %d %d",&r,&c,&Q);
        CLR(cost);
        for(int i=0; i<r; i++) cin>>maze[i];
        int sx,sy;
        cin>>t;
        while(Q--)
        {
            count=0;
            CLR(vis);
            scanf("%d %d",&sx,&sy);
            if(cost[sx-1][sy-1]==-1)
            {
                dfs(sx-1,sy-1);
                cost[sx-1][sy-1]=count;
                printf("%d\n",count);
                for(int i=0; i<r; i++)
                    for(int j=0; j<N; j++)
                        if(visit[i][j])cost[i][j]=count;
            }
            else printf("%d\n",cost[sx-1][sy-1]);
        }

    }
    return 0;
}
