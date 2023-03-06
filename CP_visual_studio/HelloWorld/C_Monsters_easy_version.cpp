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
        ll n;
        cin>>n;
        ll a[n+10];
        ll count1=0;
        ll count2=0;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                count1++;
            }
            if(a[i]==2)
            {
                count2++;
            }

        }
      
        sort(a,a+n);
        ll x=1;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                x++;
            }
            else if(a[i]>x)
            {
                ans+=(a[i]-x);
                x++;
            }
        }
        cout<<ans<<endl;
        //cout<<count1<<endl;

    }
    /*
    cerr << "\n\n\n"
         << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    */
    return 0;
}

