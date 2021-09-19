#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int n,k,sumn=0,sumk=0,an=0,ak=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        if(i%k==0)
        {
            ak++;
            sumk+=i;
        }
        else
        {
            an++;
            sumn+=i;
        }
    }
    double ansn,ansk;
    ansn=(double)sumn/an;
    ansk=(double)sumk/ak;
    printf("%.1lf %.1lf",ansk,ansn);
}
