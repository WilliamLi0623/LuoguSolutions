#include<cstdio>
using namespace std;



int main()
{
    unsigned long long n;
    scanf("%lld",&n);
    unsigned long long ans=n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4;
    printf("%lld",ans);
    return 0;
}
