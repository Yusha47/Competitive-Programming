#include<bits/stdc++.h>
using namespace std;

const int N = 1e7;
bool a[N];
bool b[N];

void seive()
{
    a[0] = a[1] = true;

    for(int i=2; i*i<=N; i++)
    {
        if(a[i] == false)
            for(int j = i*i ; j<=N; j+=i )
                a[j] = true;
    }
}
int main()
{

    seive();

    int p,q;

    for(int i=1 ; (p=i*i)<= N; i++)
    {

        for(int j=1; ((q=j*j*j*j) + p)<=N; j++)
        {

            if(!(a[p+q]))
            {
                b[p+q] = true;
            }

        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int count =0;
        for(int i=2; i<n; i++)
        {
            if(b[i])
                count++;
        }
        cout<<count<<"\n";
    }
}
