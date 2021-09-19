#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

const int fx[] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
const int fy[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
struct location
{
    int x;
    int y;
};

location a;
location b;
unsigned long long step[30][30];
bool c[30][30];
int main()
{
    scanf("%d%d%d%d",&a.x,&a.y,&b.x,&b.y);
    a.x+=2;
    b.x+=2;
    a.y+=2;
    b.y+=2;
    step[2][2]=1;
    c[b.x][b.y]=1;
    for(int i=1;i<=8;i++)
    {
        c[b.x+fx[i]][b.y+fy[i]]=1;
    }
    for(int i=2;i<=a.x;i++)
    {
        for(int j=2;j<=a.y;j++)
        {
            if(c[i][j])
                continue;
            else
                step[i][j]=max(step[i][j],step[i-1][j]+step[i][j-1]);
        }
    }
    printf("%lld",step[a.x][a.y]);
    return 0;
}
