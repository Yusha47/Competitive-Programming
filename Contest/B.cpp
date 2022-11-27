
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

    ll m,s;
    int check[1000];
    CLR(check);
    cin>>m>>s;


    int a[m+10];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
        check[a[i]]=1;
    }
    if(s==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(check[s]==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        for(int i=1; i<=s; i++)
        {
            int result=0;
            if(check[i]!=1)
            {
                for(int j=2; j<=s; j++)
                {
                    if(check[j]!=1)
                        result+=i+j;

                }
            }
            if(result==s)
            {
                cout<<"YES"<<endl;
                return;
            }

        }
         cout<<"NO"<<endl;
    }


}

int32_t main()
{
    fast;

    ll t;
    cin>>t;


    while(t--)
    {
        solve();
    }
    return 0;
}


