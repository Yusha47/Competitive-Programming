
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
    ll result=0;
    rep(i,n)
    {
      char x;
      cin>>x;
      result+=x-'0';

    }
    cout<<result<<endl;






}

int32_t main()
{
    fast;

    ll t;
    t=1;


    while(t--)
    {
        solve();
    }
    return 0;
}




