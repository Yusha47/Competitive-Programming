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





using namespace std;
 vector<vector<int> >  g(210, vector<int> (210, 0));
vector<bool> v;




int gcd(int a,int b)
{
    if(a<b)
        return gcd(b,a);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
bool bfs(int p,int n)
{
    int colorArr[n+20];
    for (int i = 0; i < n; ++i)
        colorArr[i] = -1;

    colorArr[p] = 1;

    queue <int> q;
    q.push(p);


    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int i = 0; i < n; i++)
        {

            if (g[u][i] && colorArr[i] == -1)
            {
                colorArr[i] = 1 - colorArr[u];
                q.push(i);
            }

            else if (g[u][i] && colorArr[i] == colorArr[u])
                return false;
        }
    }

    return true;
}


void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve (int n,int e)
{

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            g[i][j]=0;
        }

    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin>>a>>b;
        g[a][b]=1;
        g[b][a]=1;
    }

    if(bfs(0,n)==false)cout<<"NOT BICOLORABLE."<<endl;
    else cout<<"BICOLORABLE."<<endl;


}

int32_t main()
{
    fast();

    ll t=1;
//    cin>>t;


    while(t)
    {

        int n, e;
        cin >> n;

        if(n==0)return 0;
        cin>>e;
        solve(n,e);
    }

    return 0;
}

