//sieve lowest and highest prime of a number finder

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=1e9+10;
    vector<bool> is_prime(n+1, true);
    vector<int>lp(n,0),hp(n,0);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            lp[i]=hp[i]=i;
            for (int j = i * i; j <= n; j += i)
            {


                is_prime[j] = false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }

    //prime factorization

    int num;
    cin>>num;
    vector<int>prime_factors;
    //map<int,int>prime_factors; for counting how many times are there 24 2(3times) 3 1 times;
    while(num>1)
    {
        int prime_factor=hp[num];
        while(num%prime_factor==0)
        {
            num/=prime_factor;
            prime_factors.push_back(prime_factor);
            //prime_factors[prime_factor]++;
        }
    }
    for(int factor : prime_factors)
    {
         cout<<factor<<"\n";
    }

    // for counting how many times are there 24 2(3times) 3 1 times;




}
