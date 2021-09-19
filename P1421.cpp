#include<cstdio>
using namespace std;

const int price=19;

int main()
{
    int a,b,c,ans;
    scanf("%d%d",&a,&b);
    c=10*a+b;
    for(int i=1;;i++)
    {
        if(i*price>c)
        {
            break;
        }
        else
        {
            ans=i;
        }
    }
    printf("%d",ans);
}
