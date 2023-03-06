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

const int n = 1e6 + 10;
vector<bool> is_prime(n + 1, true);
vector<int> lp(n, 0), hp(n, 0);

void sieve()
{

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            lp[i] = hp[i] = i;
            for (int j = i * i; j <= n; j += i)
            {

                is_prime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }
}
int32_t main()
{
    FAST;

    ll t = 1;

    sieve();

    while (t--)
    {
        ll x;
        cin >> x;
        if (is_prime[x] == true)
        {
            if (x % 2 != 0)
                cout << 0 << endl;
            else
                cout << x << endl;
        }
        else
            cout << x << endl;
    }
    /*
    cerr << "\n\n\n"
         << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    */
    return 0;
}
