
#include<bits/stdc++.h>
using namespace std;
#define MAX 10000


int dist[MAX+10];

int solve(int a, int b)
{

    for(int i=0; i<MAX; i++)dist[i]=1000000000;


    queue<int> Q;
    Q.push(a);
    dist[a]= 0;

    while(!Q.empty())
    {

        int u = Q.front();
        cout<<u<<endl;

        Q.pop();
        if(u==b)return dist[u];

        int node1 = u - 1;
        int node2 = u + 3;
        int node3 = u * 2;
        if(node1 >= 0)
        {


            if(dist[u]+1 < dist[node1])
            {
                dist[node1] = dist[u] + 1;
                Q.push(u-1);
            }
        }
        if(node2 <= b*2)
        {

            if(dist[u]+1 < dist[node2])
            {
                dist[node2] = dist[u] + 1;
                Q.push(u+3);
            }

        }

        if(node3 <= 2*b)
        {

            if(dist[u]+1 < dist[node3])
            {
                dist[node3] = dist[u] + 1;
                Q.push(u*2);
            }

        }



    }

    return dist[b];


}

int main()
{

    int a,b,T,cs = 1;
    cin>>T;
    while(T--)
    {

        scanf("%d %d",&a,&b);
        printf("%d\n", solve(a,b));


    }


    return 0;

}
