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
    long long n;
    string s;
    cin >> n >> s;
    s = '$' + s;
    long long cnt0 = 0, cnt1 = 0;
    for (long long i = 1; i <= n; ++i)
    {
        cnt0 += s[i] == '0';
        cnt1 += s[i] == '1';
    }
    long long ans = cnt0 * cnt1;
    long long lg = 1;
    for (long long i = 2; i <= n; ++i)
    {
        if (s[i] == s[i - 1])
        {
            lg++;
        }
        else
        {
            ans = max(ans, lg * lg);
            lg = 1;
        }
    }
    ans = max(ans, lg * lg);
    cout << ans << '\n';


}

int32_t main()
{
    fast();

    ll t;
    cin>>t;


    while(t--)
    {
        solve();
    }
    return 0;
}


