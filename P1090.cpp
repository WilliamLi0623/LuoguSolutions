#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;

unsigned long long a[10001];

int main()
{
    long long n;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    queue<unsigned long long>q;
    unsigned long long ans=0;
    for(int i=0;i<n;i++)
        q.push(a[i]);
    bool flag=false;
    while(1)
    {

        ans+=q.front();
        q.pop();
        ans+=q.front();
        q.pop();
        q.push(ans);
        if(q.size()==1)
            break;
    }
    printf("%lld",ans);
}
