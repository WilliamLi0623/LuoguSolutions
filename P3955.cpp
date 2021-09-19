#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;
#define maxn 1007
int a[maxn];
int tmp;
int flag=0;
struct
{
    int l;
    int num;
}b[maxn];

int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<q;i++)
        scanf("%d%d",&b[i].l,&b[i].num);
    sort(a,a+n);
    for(int i=0;i<q;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            tmp=pow(10,b[i].l);
            tmp=a[j]%tmp;
        if(tmp==b[i].num){
            flag=a[j];
            break;
            }
        }
        if(flag)
            printf("%d\n",flag);
        else
            puts("-1");
    }
}
