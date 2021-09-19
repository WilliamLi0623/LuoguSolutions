#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int n,k,tmp=0,ans=0;
    scanf("%d%d",&n,&k);
    while(n>=k)
    {
                n-=k;
                n+=1;
                ans+=k;
    }
    ans+=n;
    printf("%d",ans);
}
