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
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;


int32_t main()
{
    FAST;

    ll t=1;
    cin>>t;


    while(t--)
    {
        ll n;
        cin>>n;
        ll sumA=1;
        int flag=4;
        ll sumB=0;

        ll colorF=-1;
        ll colorA=1;
        ll colorB=0;


        int check=0;

        for(int i=2; i<=n; i++)
        {



            if(flag<=4 && flag>=3)
            {

                if(sumA+sumB+i>n)
                {

                    check=1;
                    break;
                }
                if(i%2!=0)
                {
                    if(colorF==1)
                    {
                       colorB+=i/2+1;
                    }
                    else
                    {
                        colorB+=i/2;
                    }




                }
                else
                {

                    colorB+=i/2;
                    if(colorF==1)
                    {
                        colorB+=i;
                    }
                    colorF*=-1;



                }
                sumB+=i;


                flag--;

            }
            else if(flag>=1 &&  flag<=2)
            {
              if(sumA+sumB+i>n)
                {

                    check=2;
                    break;
                }
                if(i%2!=0)
                {
                    if(colorF==1)
                    {
                       colorA+=i/2+1;
                    }
                    else
                    {
                        colorA+=i/2;
                    }




                }
                else
                {

                    colorB+=i/2;
                    if(colorF==1)
                    {
                        colorA+=i;
                    }
                    colorF*=-1;



                }

                sumA+=i;

                // cout<<"Sum A"<<sumA<<" "<<i<<endl;
                flag--;



                if(flag==0)
                {
                    flag=4;
                }
            }




        }
        ll cardRemain=n-(sumA+sumB);
        if(cardRemain>0)
        {
            if(check==1)
            {
                sumB+=cardRemain;
            }
            if(check==2)
            {
                sumA+=cardRemain;
            }
        }
        cout<<sumA<<" "<<sumB<<endl;
        cout<<colorA<<" "<<sumA-colorA<<" "<<colorB<<" "<<sumB-colorB<<endl;
    }


    /*
    cerr << "\n\n\n"
         << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    */
    return 0;
}


