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





using namespace std;


int gcd(int a,int b)
{
    if(a<b)
        return gcd(b,a);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int bfs(int a,int b)
{
    vector<int> cost(1e5+10,99999);
    queue<int> q;
    q.push(a);
    cost[a]= 0;

    while(!q.empty())
    {

        int f = q.front();

        q.pop();
        if(f==b)return cost[f];

        int num[3];


        int num1 = f + 3;
        int num2 = f * 2;
        int num3 = f - 1;
        if(num1 <= 2*b)
        {

            if(cost[f]+1 < cost[num1])
            {
                cost[num1] = cost[f] + 1;
                q.push(num1);
            }

        }
        if(num2 <= b*2)
        {

            if(cost[f]+1 < cost[num2])
            {
                cost[num2] = cost[f] + 1;
                q.push(num2);
            }

        }

        if(num3 >= 0)
        {
            if(cost[f]+1 < cost[num3])
            {
                cost[num3] = cost[f] + 1;
                q.push(num3);
            }
        }





    }

    return cost[b];

}



void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve ()
{
    ll  a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<abs(b-a)<<endl;
        return;
    }
    int x=bfs(a,b);
    cout<<x<<endl;


}

int32_t main()
{
    fast();

    ll t;
    cin>>t;


    while(t--)
    {
        solve();
    }

    return 0;
}

