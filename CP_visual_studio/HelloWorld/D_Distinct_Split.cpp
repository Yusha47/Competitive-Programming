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
        cin >> n;
        string str;
        cin >> str;
        ll x=0;
        map<char, int> count1;
        if(n==2)
        {

            cout<<"2"<<endl;
            continue;
        }
        for(int i = 0; i < str.size(); i++)
        {
            count1[str[i]]++;
            x=i;
            if(count1[str[i]]>1)
            {

                break;
            }
        }
        map<char, int> count2;
        for(int i = x; i < str.size(); i++)
        {
            count2[str[i]]++;

        }

        ll sum1=count1.size()+count2.size();

        map<char, int> count3;
        for(int i = n-1; i >=0; i--)
        {
            count3[str[i]]++;
            x=i;
            if(count3[str[i]]>1)
            {

                break;
            }
        }
        map<char, int> count4;
        for(int i = x; i>=0; i--)
        {
            count4[str[i]]++;

        }
        ll sum2=count3.size()+count4.size();
        cout<<max(sum1,sum2)<<endl;

    }

    return 0;
}
