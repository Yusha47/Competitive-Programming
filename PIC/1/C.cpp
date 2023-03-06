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

int fibo(int n)
{
    if (n <= 1)
       {
        return n;
       }

    return fibo(n-1) + fibo(n-2);
}
int32_t main()
{
    FAST;

    ll t=1;


    while(t--)
    {
     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         for(int space=0;space<n-i;space++)
         {
             cout<<" ";
         }
         for(int j=0;j<i;j++)
         {
             cout<<"*";
             if(j<i-1)
             {
                 cout<<" ";
             }
         }
         cout<<endl;

     }

    }
    return 0;
}


