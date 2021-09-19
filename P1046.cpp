#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int a[10];

int main()
{
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    int n;
    scanf("%d",&n);
    n+=30;
    int ans=0;
    for(int i=0;i<10;i++)
        if(a[i]<=n)
        ans++;
    printf("%d",ans);
}
