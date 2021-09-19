#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{
    int a,b,ans=0,day;
    for(int i=1;i<=7;i++)
    {
        scanf("%d%d",&a,&b);
        if(a+b>8)
        {
            if(a+b>ans)
            {
                ans=a+b;
                day=i;
            }
        }
    }
    printf("%d",day);
}
