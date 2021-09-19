#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int money=0,cost=0,x=0,mum=0;
    bool flag=false;
    for(int i=1;i<=12;i++)
    {
        money+=300;
        scanf("%d",&cost);
        money-=cost;
        if(money<0)
        {
            flag=true;
            x=i;
            x=-x;
            break;
        }
        mum+=money/100;
        money%=100;
    }
    if(!flag)
        {
            money+=mum*120;
            printf("%d",money);
        }
    else
        printf("%d",x);
}
