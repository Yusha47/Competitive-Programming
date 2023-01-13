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

ull mod(ull a)
{
    return (a % MOD + MOD) % MOD;
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
    ull result=0;
    ll i=1;
    ll j=1;
    int flag=1;
    while(i<=n && j<=n)
    {
        result+=(i*j);
        if(flag==1)
        {
            j++;
            flag=0;
        }
        else
        {
             i++;
             flag=1;
        }

    }
    result*=2022;
    ull result2=(result% MOD + MOD) % MOD;
   cout<<result2<<endl;
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

