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



ll dfs(ll i){
	vis[i] = true;
	ll ans = X[i];//ans
	for(auto x:adj[i]){
		if(vis[x])	continue;
		ans = min(ans,dfs(x));
	}
	return ans;
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
    //fast();

    ll t=1;
//    cin>>t;


    while(t)
    {

        int n, v, u, q;
        cin >> n;
        if(n==0)break;


        while(1)
        {
            cin>>u;
            if(!u) break;
            while(cin>>v && v)
                adj[u].push_back(v);
        }
        cin>>q;
        while(q--)
        {
            cin>>src;
            chk=-1;
            CLR(vis);
            dfs(src);
            vector<int>cnt;
            for(int i=1; i<=n; i++)
                if(!vis[i])
                    cnt.push_back(i);
            int cntl=cnt.size();
            cout<<cntl;
            for(int i=0; i<cntl; i++)
                cout<<" "<<cnt[i];
            cout<<"\n";
        }
        for(int i=1; i<=n; i++) adj[i].clear();
    }





    return 0;
}


