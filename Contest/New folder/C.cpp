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
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>freqMap;
        rep(i,n)
        {
            freqMap[s[i]]++;
        }
        for (auto it : freqMap)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        ll count1=n;
        for(int i=1; i<n; i++)
        {
            count1=n;
            ll res=0;
            for (auto it : freqMap)
            {
                if(it.second!=i)
                {
                    res+=abs(it.second-i);
                }
            }
            cout<<"Debug "<<res<<endl;

            if(count1>=res)
            {
                count1=res;
            }

        }
        cout<<count1<<endl;

    }
    return 0;
}

