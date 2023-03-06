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


    ll t=1;
    cin>>t;


    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        ll n = 2 * (a - b);
        cout << n << '\n';
        vector<ll> arr(n);
        int ptr = 0;
        for (ll c = b; c <= a; ++c)
        {
            arr[ptr++] = c;
        }
        for (ll c = a - 1; c > b; --c)
        {
            arr[ptr++] = c;
        }
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }

    cerr << "\n\n\n"
         << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    return 0;
}

