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
        ll w,d,h;
        cin>>w>>d>>h;
        ll a,b,f,g;
        cin>>a>>b>>f>>g;
            ll v1;
        if(abs(d-b)<b)
           {
                v1=min(b,abs(d-b))+h+abs(a-f)+min(abs(g-d),d);
           }
        else
            v1=b+h+abs(a-f)+g;



        //ll v2=(d-b)+h+abs(a-f)+abs(-f);

        cout<<v1<<endl;



    }

    return 0;
}

