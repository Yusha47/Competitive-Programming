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
        string s1("3141592653589793238462643383279");
        string s2;
        cin>>s2;
        ll cnt=0;
        rep(i,s2.length())
        {
            if(s1[i]==s2[i])
            {
                cnt++;
            }
            else break;
        }
        cout<<cnt<<endl;
 
    }
    return 0;
}