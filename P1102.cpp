#include<cstdio>
#include<algorithm>

using std::sort;
using std::lower_bound;
using std::upper_bound;

long long n,c,a[200001],ans;

int main()
{    scanf("%lld%lld",&n,&c);
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++)
        ans+=(upper_bound(a,a+n,a[i]+c)-a)-(lower_bound(a,a+n,a[i]+c)-a);
    printf("%lld\n",ans);
}
