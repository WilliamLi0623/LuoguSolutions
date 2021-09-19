#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int main()
{
    int x,n,ans=0;
    scanf("%d%d",&x,&n);
    for(int i=0;i<n;i++)
    {
        if((x+i)%7==6||(x+i)%7==0)
            continue;
        else
            ans+=250;
    }
    printf("%d",ans);
}
