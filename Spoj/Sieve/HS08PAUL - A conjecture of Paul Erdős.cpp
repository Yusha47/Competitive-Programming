//TDPRIMES - Printing some primes
//sieve lowest and highest prime of a number finder

#include<bits/stdc++.h>
using namespace std;
const int n=1e8;
vector<int>primes;
int main()
{

    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            int result=i*i+j*j*j*j;
            if(is_prime[result]==true)
            {
                cout<<result<<endl;
            }
        }
    }




}


