#include<cstdio>
#include<cmath>
using namespace std;


int main()
{
    int m,t,s;
    scanf("%d%d%d",&m,&t,&s);
    if(t==0)
    {
        printf("0");
    }
    else
    {
        int ans=m-ceil((double)s/t);
        //printf("%lf",ceil(s/t));
        if(ans<=0)
        {
            printf("0");
        }
        else
        {
            printf("%d",ans);
        }
    }

}
