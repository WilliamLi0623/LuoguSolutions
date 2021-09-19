#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>


using namespace std;


int f[1000005],h[1000005],n;

char s[2][1005];
int find(int x){return f[x]==x?x:f[x]=find(f[x]);}


void unionn(int x,int y)
{
    int r1=find(x),r2=find(y);
    if(r1!=r2)h[r1]+=h[r2],f[r2]=f[r1];
}
int main()
{
    int t;
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i&1]);
        for(int j=0;j<n;j++)
        {
            f[i*n+j]=i*n+j,h[i*n+j]=1;
            if(i!=0&&s[(i-1)&1][j]!=s[i&1][j])unionn((i-1)*n+j,i*n+j);
            if(j!=0&&s[i&1][j-1]!=s[i&1][j])unionn(i*n+j,i*n+j-1);
        }
    }
    int i,j;
    while(t--)
    {
        scanf("%d%d",&i,&j);
        printf("%d\n",h[find((i-1)*n+j-1)]);
    }
    return 0;
}
