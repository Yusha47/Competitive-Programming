
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


    ll t=1;
    cin>>t;


    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        int flag2=0;
        rep(i,n)
        {
            s[i]=tolower(s[i]);
        }
        if(s[0]!='m' )
        {

            cout<<"NO"<<endl;
            continue;
        }


        for(int i=0; i<n-1; i++)
        {

            if(s[i]=='m')
            {
                if(s[i+1]!='m' && s[i+1]!='e' )
                {

                    flag2=1;
                }
            }
            if(s[i]=='e')
            {
                if(s[i+1]!='e' && s[i+1]!='o' )
                {

                    flag2=1;
                }
            }
            if(s[i]=='o')
            {
                if(s[i+1]!='o' && s[i+1]!='w' )
                {

                    flag2=1;
                }
            }
            if(s[i]=='w')
            {
                if(s[i+1]!='w' && s[i+1]!='m' )
                {

                    flag2=1;
                }
            }

        }

        if(flag2==0)
        {
            cout<<"YES"<<"\n";
        }
        else
            cout<<"NO"<<"\n";

    }

    /*
    cerr << "\n\n\n"
         << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;*/
    return 0;
}

