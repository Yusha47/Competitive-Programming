#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a, b;
    int sx, sy, ex, ey;
    int addX[] = { -1, -1, 1, 1, -2, -2, 2, 2 };
    int addY[] = { 2, -2, 2, -2, 1, -1, 1, -1 };
    int chessBoard[8][8];
    while(cin>>a>>sy>>b>>ey && a && sy && b &&ey)
    {
        sx = a - 'a';
        sy--;
        ex = b - 'a';
        ey--;

        chessBoard[sx][sy] = 0;

        queue<pair<int, int> > q;
        q.push(make_pair(sx, sy));
        while(!q.empty())
        {
            pair<int, int> c = q.front();
            int x = c.first, y = c.second;
            if(x == ex && y == ey) break;
            q.pop();

            for(int i = 0; i < 8; i++)
            {
                if(x + addX[i] >= 0 && x + addX[i] < 8
                        && y + addY[i] >= 0 && y + addY[i] < 8)
                {
                    q.push(make_pair(x + addX[i], y + addY[i]));
                    chessBoard[x + addX[i]][y + addY[i]] =  chessBoard[x][y] + 1;
                }
            }
        }
        printf("To get from %c%d to %c%d takes %d knight moves.\n", a, sy + 1, b, ey + 1, chessBoard[ex][ey]);
    }
}
