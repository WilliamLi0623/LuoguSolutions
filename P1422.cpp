#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

#define a 0.4463
#define b 0.4663
#define c 0.5663

//const double a=0.4463;
//const double b=0.4663;
//const double c=0.5663;

int main()
{
    double n,ans;
    scanf("%lf",&n);
    if(n>=0&&n<=150)
        ans=n*a;
    if(n>=151&&n<=400)
        ans=150*a+(n-150)*b;
    if(n>=401)
        ans=150*a+(400-150)*b+(n-400)*c;
    printf("%.1lf",ans);
}
