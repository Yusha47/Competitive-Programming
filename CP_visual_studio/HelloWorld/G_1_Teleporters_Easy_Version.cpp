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
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;


int32_t main()
{
    FAST;
   
    ll t=1;
    cin>>t;


    while(t--)
    {
      ll n,c;
      cin>>n>>c;
      ll a[n+10];
      rep(i,n)
      {
        cin>>a[i];
      }
      ll inc=1;
        for(int i=0;i<n;i++)
      {
        a[i]+=inc++;
      }
      
     
      sort(a,a+n);
      rep(i,n)
      {
     // cout<<a[i]<<" ";
      }
      
      ll cost=0;
      ll ans=0;
      rep(i,n)
      {
        if(cost+a[i]>c)
        {
            break;
        }
        cost+=a[i];
        ans++;
      }
      cout<<ans<<endl;
    }
    /*
    cerr << "\n\n\n"
         << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
  */
    return 0;
}

