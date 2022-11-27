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
void subString(string s, int n)
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;
}


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
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    a[0]=a[n];
    if(n==1)
    {

        cout<<"ANS : "<<'1'<<endl;
        return;
    }
    int count1=0;
    for(int i=1; i<=n; i++)
    {
        int temp;
        int temp_count=0;
        int flag=1;
        for(int i=1; i<=n; i++)
        {

                if(a[i]!=-1 && flag==1)
                {
                    temp=a[i];
                    flag=0;
                }
                if(a[i]==temp)
                {
                    count1+=2;
                    break;
                }


        }

        for(int j=1; j<=n; j++)
        {
            ll pre=j-1;
            ll after=j+1;
            if(j>1 && pre<=1)continue;
            if(after>n)continue;
            if(pre==1 && a[pre]==-1)continue;
            cout<<i<<j<<" Pre "<<a[pre]<<" After : "<<a[after]<<endl;
            if(a[pre]==-1)
            {
                for(int k=0; k<n; k++)
                {

                    if(a[pre]==-1)
                    {
                        if(pre<=1)break;
                        pre--;
                    }
                    else break;
                }
            }
            if(after==-1)
            {
                for(int k=0; k<n; k++)
                {
                    if(after>n)break;
                    if(a[after]==-1)
                    {
                        after+=1;
                    }
                    else break;
                }
            }

            if(a[pre]==a[after])
            {
                a[j]=-1;
                temp_count++;
                cout<<"Increased : "<<temp_count<<" "<<i<<" "<<j<<endl;

            }
        }
        if(temp_count>=count1)
        {
            count1=temp_count;
        }



    }


    cout<<"ANS : "<<count1<<endl;

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


