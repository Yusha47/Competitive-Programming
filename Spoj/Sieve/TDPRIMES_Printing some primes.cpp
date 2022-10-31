//TDPRIMES - Printing some primes
//sieve lowest and highest prime of a number finder

#include<bits/stdc++.h>
const int n=1e8;
using namespace std;
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

    for(int i=2;i<=n;i++)
    {
        if(is_prime[i]) primes.push_back(i);
    }
    for(int i=1;i<primes.size();i+=100) cout<<primes[i-1]<<"\n";




}

