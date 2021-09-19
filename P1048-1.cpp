#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int t,m,a[1001],b[101],dp[1001][101];

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    scanf("%d%d",&t,&m);
    for(int i=1;i<=m;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(int i=1;i<=m;i++)
        for(int j=t;j>=0;j--)
        {
            if(j>=a[i])
            dp[i][j]=max(dp[i-1][j-a[i]]+b[i],dp[i-1][j]);
            else
                dp[i][j]=dp[i-1][j];
        }
    printf("%d",dp[m][t]);
}
