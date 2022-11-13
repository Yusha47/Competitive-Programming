//TDPRIMES - Printing some primes
//sieve lowest and highest prime of a number finder

#include<bits/stdc++.h>
const int n=1e6;
using namespace std;

bool check1(int n)
{


    while(n>0)
    {
        int digit=n%10;
        if (digit == 0)
        {
            return false;
        }
        else
        {
            n=n/10;
        }
    }
    return true;


}

int truncate_left(int x)
{
    int c = (int)log10(x);

    return x;
}

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

    for(int i=2; i<=n; i++)
    {
        if(is_prime[i] &&  check1(i)==false)
        {
            is_prime[i]=false;
            continue;
        }
        int c = (int)log10(i);

                for(int i=0; i<c; i++)
       {
            w

       }
    }
    for(int i=2;i<=n;i++)
    {
        if(is_prime[i]) primes.push_back(i);
    }
    for(int i=1; i<100; i++) cout<<primes[i-1]<<"\n";




}

