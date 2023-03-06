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
#define endl '\n'
#define MOD 1000000007
#define MX 105
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;

int32_t main()
{
    FAST;

    // #ifndef ONLINE_JUDGE

    // // For getting input from input.txt file
    // freopen("input.txt", "r", stdin);

    // // Printing the Output to output.txt file
    // freopen("output.txt", "w", stdout);

    // #endif

    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ull a[n + 10];

        int flag = 0;
        ll sum = 0;
        rep(i, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        rep(i, n - 1)
        {
            if (a[i] != a[i + 1])
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {

            for (int i = 0; i < n; i++)
            {
                while (sum % a[i] == 0 || a[i] == a[i - 1])
                {
                    a[i]++;
                }
            }
           
            rep(i, n)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }

        else 
        {
            rep(i,n)
            {
                cout << a[i]+i << " ";
            }
            cout<<endl;
            
        }
        

    }

    // cerr << "\n\n\n"
    //      << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    return 0;
}
