#include<cstdio>
#include<algorithm>

using namespace std;

int a[210];

int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            scanf("%d",&x);
            if(a[j]==0||a[j]>a[i]+x)
            {
                a[j]=a[i]+x;
            }
        }
    }
    printf("%d",a[n]);
    return 0;
}
