#include<cstdio>
#include<algorithm>
using namespace std;

struct
{
    int num;
    int price;
}a[4];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<3;i++)
    {
        scanf("%d%d",&a[i].num,&a[i].price);
    }
    int ans=2147483646;
    int tmp=0;
    for(int i=0;i<3;i++)
    {
        for(int j=1;;j++)
        {
            if(j*a[i].num>=n)
            {
                ans=min(ans,j*a[i].price);
                break;
            }
        }
    }
    printf("%d",ans);
}
