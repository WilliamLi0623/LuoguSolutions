#include<cstdio>
#include<cmath>

using namespace std;


int a[4];

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        if(n>4&&n<=12)
        {
            a[0]=1;
        }
    }
    if(n%2==0)
    {
        a[1]=1;
    }
    if(n>4&&n<12)
    {
        a[1]=1;
    }
    if(n%2==0)
    {
        if(n<=4||n>12)
            a[2]=1;
    }
    if(n%2==1)
    {
        if(n>4&&n<=12)
            a[2]=1;
    }
    if(n%2==1&&n<=4)
    {
        a[3]=1;
    }
    if(n%2==1&&n>12)
    {
        a[3]=1;
    }
    printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
}
