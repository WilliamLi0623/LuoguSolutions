#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int n,ans=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
    {
        printf("%02d",ans);
        ans++;
    }printf("\n");
    }
}
