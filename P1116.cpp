#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;
int a[10001];
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
        if(a[j]<a[i])
            ans++;
    printf("%d",ans);
}
