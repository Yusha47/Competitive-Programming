
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
void subString(string s, int n)
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;
}



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

    rep(i,n)
    {
        cin>>a[i];

    }
    ll low=10e6+10;
    rep(i,n-1)
    {
        for(int j=i+1;j<n;j++)
        {
            ll result=a[i]+a[j]+j-i;
            if(result<=low)
            {
                low=result;
            }
        }
    }
    cout<<low<<endl;




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



