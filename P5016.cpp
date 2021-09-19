#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;

long long n,c[10001],m,p1,s1,s2;
double p2;
long long sum1,sum2;
int read()
{
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld",&c[i]);
    scanf("%lld%lld%lld%lld",&m,&p1,&s1,&s2);
}

int main()
{
    read();
    for(int i=1;i<m;i++)
        sum1+=(m-i)*c[i];
    for(int i=m+1;i<=n;i++)
        sum2+=(i-m)*c[i];
//    cout<<sum1<<endl;
//    cout<<sum2<<endl;
    if(p1<m)sum1+=s1*abs(p1-m);
    else if(p1>m)sum2+=s1*abs(p1-m);
//    cout<<abs(p1-m)<<endl;
//    cout<<sum1<<endl;
//    cout<<sum2<<endl;
//    cout<<abs(sum1-sum2)<<endl;
    p2=(double)m-((double)abs(sum1-sum2))/(double)s2;
//    printf("%lf\n",p2);
//    printf("%lf\n",p2);
    if(p2-floor(p2)>=0.5) p2=ceil(p2);
    else p2=floor(p2);
//    printf("%lf\n",p2);
    //p2--;
    if(p2<1.0)p2=1.0;
    else if(p2>(double)n)p2=(double)n;
    printf("%lld\n",(int)p2);
}
