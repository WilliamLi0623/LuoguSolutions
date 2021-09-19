#include<algorithm>
#include<cstdio>


using namespace std;

//int loc[10001];

int main()
{
    int l,n,maxn=0,minn=0;
    scanf("%d%d",&l,&n);
    //scanf("%d",&n);
    int p;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&p);
        minn=max(minn,min(l-p+1,p));
        maxn=max(maxn,max(l-p+1,p));
    }
    printf("%d %d",minn,maxn);
}
