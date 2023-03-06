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
        ll size1=n;
        string s;
        cin>>s;
        ll j=n;
        ll count1=0;
        if(n==1)
        {
            cout<<'1'<<endl;
            continue;
        }
        for(int i=0; i<n/2; i++)
        {

            j--;
           if(s[i]=='1' && s[j]=='1' || i==j || s[i]=='0' && s[j]=='0')
           {
               break;
           }
           //cout<<s[i]<<"minus"<<s[j]<<endl;
           count1++;


        }

        cout<<n-count1*2<<endl;
    }


    return 0;
}
