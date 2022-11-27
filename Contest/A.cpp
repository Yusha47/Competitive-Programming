
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
using namespace std;


void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve ()
{
    string s;
    cin>>s;
    int l=s.length();
    if(s[0]!='Y' && s[0]!='e' && s[0]!='s')
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1; i<l; i++)
    {
        if(s[i]=='Y')
        {
            if(s[i-1]!='s')
            {
               cout<<"NO"<<endl;
               return;
            }
        }
        else if(s[i]=='e')
        {

            if(s[i-1]!='Y')
            {
                 cout<<"NO"<<endl;
                 return;
            }
        }
        else if(s[i]=='s')
        {
            if(s[i-1]!='e')
            {
                 cout<<"NO"<<endl;
                 return;
            }
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }


    }
    cout<<"YES"<<endl;






}

int32_t main()
{
//    fast;

    ll t;
    cin>>t;


       while(t--)
    {
        solve();
    }
    return 0;
}

