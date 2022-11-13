#include<bits/stdc++.h>
using namespace std;

const int N = 1e7;
bool a[N];
bool b[N];

int truncate_left(int x)
{
    int c = (int)log10(x);
    while (x > pow(10,c)) x -= pow(10,c);
    return x;
}
int main()
{

   for(int j=0;j<1000;j++)
   {
    int x=j;

    int c = (int)log10(x);
    for(int i=0; i<c; i++)
    {
        x=truncate_left(x);
        cout<<x<<" ";



    }
    cout<<endl;
   }

}
