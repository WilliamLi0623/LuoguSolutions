#include<cstdio>
#include<cmath>
using namespace std;
long double a,b,c,p,ans;

int main()
{
    scanf("%Lf%Lf%Lf",&a,&b,&c);
    p=(a+b+c)/2;
    ans=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1Lf",ans);
}
