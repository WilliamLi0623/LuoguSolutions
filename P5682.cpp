#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

long long n,a[200001],b[200001],maxa,maxb,maxc;

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        maxa=max(maxa,a[i]);
    }
    for(int i=0;i<n;i++)
        if(a[i]>maxb&&a[i]<maxa)
        maxb=a[i];
    for(int i=0;i<n;i++)
        if(a[i]>maxc&&a[i]<maxb)
        maxc=a[i];
    if(!maxb)
        puts("-1");
    if(maxb>maxc&&maxc!=0)
        printf("%lld",maxc);
        if(!maxc)
            printf("%lld",maxb);
}
