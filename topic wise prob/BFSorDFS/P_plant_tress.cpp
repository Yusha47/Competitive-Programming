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
int src,chk;


int gcd(int a,int b)
{
    if(a<b)
        return gcd(b,a);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll X[200000];
vector <ll> adj[200000];
bool vis[200000];

ll dfs(ll i){
	vis[i] = true;
	ll ans = X[i];//ans
	for(auto x:adj[i]){
		if(vis[x])	continue;
		ans = min(ans,dfs(x));
	}
	return ans;
}

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve ()
{
   ll T,l,r,n,m,i,j,k;
	cin>>n>>k;
	CLR(vis);
	ll ans = 0;
	for(i=0;i<n;i++)	cin>>X[i];
	for(i=0;i<k;i++){
		cin>>l>>r;
		l--;r--;
		adj[l].push_back(r);
		adj[r].push_back(l);
	}
	for(i=0;i<n;i++){
		if(vis[i])	continue;
		ans+=dfs(i);
	}
	cout<<ans;
	return ;






}

int32_t main()
{
    fast;

    ll t=1;


    while(t--)
    {
        solve();
    }
    return 0;
}

