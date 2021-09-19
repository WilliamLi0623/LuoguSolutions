#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int n,tmp,m,ans;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&tmp);
        if(tmp>m)
            ans+=(tmp-m);
        m=tmp;
    }
    printf("%d",ans);
}
