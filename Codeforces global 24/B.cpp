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

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve ()
{
    ll n;
    cin>>n;
    ll a[n+10];


    for(ll i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    ll x=a[0],y=a[n-1];
    rep(i,n)
    {
        if(a[i]%x!=0)
        {
            cout<<y<<endl;
            return;
        }
    }
    ll result=(ll)y/x;
    cout<<result<<endl;


}

int32_t main()
{
    fast;

    ll t;

    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}


