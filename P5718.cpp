#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{
    int n,a=99999999,tmp=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&tmp);
        a=min(a,tmp);
    }
    printf("%d",a);
}
