#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

struct {
    int a,b,x,y;
}mp[20001];


int main()
{
    int n,xn,yn,ans=-1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d%d%d%d",&mp[i].a,&mp[i].b,&mp[i].x,&mp[i].y);
    scanf("%d%d",&xn,&yn);
    for(int i=1;i<=n;i++)
    {
        if(xn>=mp[i].a
           &&xn<=mp[i].a+mp[i].x
           &&yn>=mp[i].b
           &&yn<=mp[i].b+mp[i].y)
            ans=i;
    }
    printf("%d",ans);
}
