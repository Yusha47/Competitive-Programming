//sieve lowest and highest prime of a number finder

#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
vector<int> divisors[n];//.
int main()
{


    for (int i = 2; i <n; i++)
    {

        for (int j = i ; j < n; j += i)
        {
            divisors[j].push_back(i);
        }
    }


    //prime factorization
    for(int i=1; i<864; i++)
    {
        cout<<"i : "<<i<<endl;
        for(int div : divisors[i])
        {
            cout<<div<< " ";
        }
        cout<<"\n";
    }


}

