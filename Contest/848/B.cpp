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
        ll a[n+10];
        ll sum=0;
        ll count1=0;
        ll countMinus=0;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                count1++;

            }
            if(a[i]==-1)
            {
                countMinus++;

            }
            sum+=a[i];


        }

        int flag=0;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==-1 && a[i+1]==-1)
            {
                sum+=4;
                flag=1;
                break;
            }

        }
         for(int i=0; i<n-1; i++)
        {
           if(a[i]==1 && a[i+1]==-1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            if(countMinus==0)
            {
                sum-=4;

            }
            else if(count1==0)
            {
                sum+=4;

            }

        }



        cout<<sum<<endl;

    }
    return 0;
}
