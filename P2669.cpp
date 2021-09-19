#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
bool vis[10001];
int main()
{
    int k;
    scanf("%d",&k);
    long long ans=0,tmp=1;
    for(int i=1;i<=k;i++)
    {
        if(!vis[i])
        {
            for(int j=0;j<tmp;j++)
            {
                if(i+j>k)
                    break;
                ans+=tmp;;
                vis[i+j]=true;
            }
            tmp++;
        }
    }
    printf("%lld",ans);
}
