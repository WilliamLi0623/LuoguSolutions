#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;n!=1;i++)
    n/=2;
    printf("%d",i);
}
