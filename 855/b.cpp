
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
    int twin =0;

    while(t--)
    {
        int n,k;

        cin>>n>>k;
        string s;
        cin>>s;
        string v;
        v=s;
        int flag=0;
        map<char, int> mp;


        rep(i,n)
        {
            v[i]=tolower(v[i]);
        }
        cout<<v<<endl;

        rep(i,n)
        {
            mp[s[i]]++;

        }
        map<char, int >::iterator itr,itr2;
        for(itr=mp.begin(); itr!=mp.end(); itr++)
        {
            for(itr2=itr++; itr2!=mp.end(); itr2++)
            {
               if((itr2->first-32)==itr->first)
               {

               }
            }
            cout<<itr->first<<" - "<<itr->second<<endl;
        }




        /*
        cerr << "\n\n\n"
             << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;*/

    }
    return 0;
}


