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
bool is_prime[n + 1];


void sieve()
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.

    memset(is_prime, true, sizeof(is_prime));
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (is_prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }

    // Print all prime numbers

}
int32_t main()
{
    // FAST;

    ll t = 1;

     sieve();


    while (1)
    {
        ll x;
        cin>>x;
        int flag=0;
        if(x==0)
        {
            break;
        }
        cout<<x<<" = ";
        for (int i = 3; i < x; i += 2)
        {
            for (int j = x-1; j >= 3; j -= 2)
            {

                if (is_prime[i] == true && is_prime[j] == true)
                {
                    ll sum=i+j;
                    if (sum == x)
                    {
                        cout<<i<<" + "<<j<<endl;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag)break;
        }




    }
    /*
    cerr << "\n\n\n"
         << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    */
    return 0;
}

