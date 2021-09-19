#include<cstdio>
#include<cmath>
#define product(x) (a*x*x*x+b*x*x+c*x+d)
int main()
{
    double a,b,c,d,mid=0.0,l,r;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    for(int i=-100,s=0;s<3&&i<=100;i++)
    {
        l=i,r=i+1;
        if(!(product(l)))
            printf("%.2lf ",l),s++;
        if((product(l)*product(r))<0)
        {
            while(r-l>=0.001)
            {
                mid=(r+l)/2;
                (product(mid)*product(r))<=0?l=mid:r=mid;
            }
            printf("%.2lf ",r),s++;
        }
    }
    return 0;
}
