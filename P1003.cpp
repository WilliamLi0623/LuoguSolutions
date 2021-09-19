#include<cstdio>
#include<iostream>

using namespace std;


int mp[10001][10001];


int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b,g,k;
        scanf("%d%d%d%d",&a,&b,&g,&k);
        for(int j=a;j<=g;j++)
        {
            for(int l=b;l<=k;l++)
            {
                mp[j][l]=i;
            }
        }
    }
    int x,y;
    scanf("%d%d",&x,&y);
    if(mp[x][y]!=0)
    printf("%d",mp[x][y]);
    else
    {
        printf("-1");
    }
}
