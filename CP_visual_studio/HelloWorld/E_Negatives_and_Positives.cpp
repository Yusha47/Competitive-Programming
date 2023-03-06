#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define MAX 10000
#define mp make_pair
#define pb push_back

#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define repSe(i, st, end) for (int i = st; i < end; i++)
#define repS0(i, st, end) for (int i = st; i > 0; i--)
#define SET(a) memset(a, -1, sizeof(a))
#define CLR(a) memset(a, 0, sizeof(a))

#define MOD 1000000007
#define MX 105
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

int32_t main()
{
    FAST;

    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n+10];
        ll countMinus=0;
        ll sum=0;
        ll count0=0;
        ll b[n+10];
        
        rep(i,n)
        {
            cin>>a[i];
            b[i]=abs(a[i]);
            if(a[i]==0)
            {
                count0=1;
            }
             if(a[i]<0)
            {
                countMinus++;
            }
            
            sum+=abs(a[i]);

        }
        sort(b,b+n);
        if(countMinus%2==0 || count0==1)
        {
            
            cout<<sum<<endl;
            continue;
        }
        else if (countMinus%2!=0)
        {
            ll sum=b[0]*-1;
            for(int i=1;i<n;i++)
            {
                  sum+=b[i];  
            }
            cout<<sum<<endl;
        }
    }
    /*
    cerr << "\n\n\n"
         << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
  */
    return 0;
}
