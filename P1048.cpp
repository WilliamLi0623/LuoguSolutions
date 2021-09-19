#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int ti[105];
int price[1005];
int dp[105][1005];
int main()
{
    int t,m,res=-1;
    scanf("%d%d",&t,&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d",&ti[i],&price[i]);
    }
    for(int i=1;i<=m;i++)
        for(int j=t;j>=0;   j--)
        {
            if(j>=ti[i])
            {
                dp[i][j]=max(dp[i-1][j-ti[i]]+price[i],dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    printf("%d",dp[m][t]);
    return 0;
}
