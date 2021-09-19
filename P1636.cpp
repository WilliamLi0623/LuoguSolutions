#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;


int mp[11000],ans,n,m,a,b;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d",&a,&b);
        mp[a]++;
        mp[b]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(mp[i]%2)
            ans++;
    }
    if(!ans)
        puts("1");
    else
        printf("%d\n",ans/2);
    return 0;
}
