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
   string s;
   cin>>s;
   ll x=0;
   ll y=0;
   int flag=0;
   rep(i,n)
   {
    if(s[i]=='U')
    {

        y++;
    }
    else if(s[i]=='D')
    {

        y--;
    }
    else if(s[i]=='R')
    {

        x++;
    }
     else if(s[i]=='L')
    {

        x--;
    }
    if(x==1 && y==1)
    {
        flag=1;
        break;

    }
    

   }
   if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
        
    }
    /*
    cerr << "\n\n\n"
         << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
  */
    return 0;
}

