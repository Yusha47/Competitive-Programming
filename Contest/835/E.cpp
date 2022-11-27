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

void subArray(int arr[], int n)
{
    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";

            cout << endl;
        }
    }
}
void solve ()
{
    ll n;
    cin>>n;
    ll a[n+10];
    ll temp[n+10];
    vector<ll>a3;
    int count_0=0;
    int count_1=0;
    ll prefixSum[n+10];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        temp[i]=a[i];
        a3.pb(a[i]);
    }

    prefixSum[n-2] = 0;
    prefixSum[n-1] = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        if(a[i]==0)
            prefixSum[i] = prefixSum[i - 1] + 1;
    }


    int count1=0;
     for (int i=0; i<n; i++)
       {
           for (int j=i+1; j<n; j++)
            {
               if(temp[i]>temp[j])
                {
                   count1++;
            }

            }
       }
    int highest=count1;


    for (int i=0; i<n; i++)
    {
        int count1=0;
        int count2=0;
        vector<ll>a2;
        a2=a3;
        count1=prefixSum[i];




        if(a2[i]==0)a2[i]=1;
        else a2[i]=0;
        int tempSum[n+10];
        tempSum[n-1] = 0;
        tempSum[n-2] = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            if(a[i]==0)
                tempSum[i] = tempSum[i - 1] + 1;
        }

        count2=tempSum[i];
        highest=max(highest,max(count1,count2));

    }



    cout<<highest<<endl;


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


