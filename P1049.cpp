#include<cstdio>
#include<algorithm>
using namespace std;

int a[35];
int b[20010];
int main()
{
    int v,n;
    scanf("%d",&v);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=v;j>=a[i];j--)
            {
                if(b[j]<b[j-a[i]]+a[i])
                {
                    b[j]=b[j-a[i]]+a[i];
                }
            }
    }
    printf("%d\n",v-b[v]);
}
