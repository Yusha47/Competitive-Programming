//TDPRIMES - Printing some primes
//sieve lowest and highest prime of a number finder

#include<bits/stdc++.h>
const int n=1e7+7;

using namespace std;

int main()
{
    vector<bool> is_prime(n+1, true);
    vector<long long> func(n+1,0);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }



    for(long long i=1; i*i<=n; i++)
    {
        for(long long j=1; j*j*j*j+i*i<=n; j++)
        {
            long long result=i*i+j*j*j*j;
            if(result>=n)break;
            if(is_prime[result]==true)
            {
                func[result]=1;
            }
        }
    }
    //need revisit;
    for(int i = 1; i<=n; i++)
    {
        func[i] = func[i]+func[i-1];
    }

    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;


        cout<<func[x]<<endl;

    }





}



