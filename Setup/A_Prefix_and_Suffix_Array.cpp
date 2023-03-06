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
#define endl '\n'
#define MOD 1000000007
#define MX 105
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;

string isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return "NO";
        }
    }
    // Return "Yes"
    return "YES";
}
int32_t main()
{
    FAST;
    
    // #ifndef ONLINE_JUDGE

    // // For getting input from input.txt file
    // freopen("input.txt", "r", stdin);

    // // Printing the Output to output.txt file
    // freopen("output.txt", "w", stdout);

    // #endif

    ll t=1;
    cin>>t;


    while(t--)
    {
        ll n;
        cin>>n;
        ll lim=2*n-2;
        string s1;
    
        vector<string>check;
        for(int i=0;i<lim;i++)
        {
            string s;
            cin>>s;
            if(s.length()==(n-1))
            {
                check.pb(s);
            }
            
            

        }
      reverse(check[1].begin(), check[1].end());
      if(check[0]==check[1])
      {
        cout<<"YES"<<endl;
      }
      else 
      cout<<"NO"<<endl;
        
        
    }

    // cerr << "\n\n\n"
    //      << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    return 0;
}

