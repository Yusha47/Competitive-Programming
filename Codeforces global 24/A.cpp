#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define MAX 10000
#define mp make_pair
#define pb push_back

#define rep0(i,n) for(int i=0; i<n; i++)
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

    ll n;
    cin>>n;
    int a[n+10];
    int count1[n+10];
    CLR(count1);
    int x;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        count1[a[i]]+=1;

    }
    int temp=0,temp2=0;
    rep0(i,n)
    {
        if(count1[a[i]]>1)
        {
            temp=i+1;
            break;
        }
        else temp=1;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(count1[a[i]]>1)
        {
            temp2=i+1;
            break;
        }
        else temp2=n;

    }
    cout<<temp<<" "<<temp2<<endl;



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


