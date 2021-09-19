#include<cstdio>
#include<cmath>
using namespace std;


int main()
{
    long long b,p,k;
    unsigned long long ans=1;
    scanf("%lld%lld%lld",&b,&p,&k);
    long long tmp=p;
    long long tmp1=b,tmp2;
    while(tmp--)
    {
        if(tmp1<k)
        {
            tmp1=tmp1*b;
        }
        else
        {
            tmp2=tmp1%k;
            ans=tmp2;
            tmp1=b*ans;
        }
    }
    printf("%lld^%lld mod %lld=%lld",b,p,k,ans);
}
