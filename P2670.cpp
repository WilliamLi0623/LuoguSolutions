#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
#define maxn 1001
int mp[maxn][maxn];
int ans[maxn][maxn];
int x[4]={1,-1,0,0};
int y[4]={0,0,1,-1};
int a,b;



int main()
{
    scanf("%d%d",&a,&b);
    memset(mp,0,sizeof(mp));
    char tmp;
    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++){
                //scanf("%c ",&tmp);
            cin>>tmp;
            if(tmp=='*')
                mp[i][j]=1;
        }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++)
            if(!mp[i][j])
                printf("%d",
                       mp[i-1][j-1]
                       +mp[i-1][j]
                       +mp[i-1][j+1]
                       +mp[i][j-1]+
                       mp[i][j]+
                       mp[i][j+1]
                       +mp[i+1][j-1]
                       +mp[i+1][j]
                       +mp[i+1][j+1]
                       );
            else
                printf("*");
        printf("\n");
    }
}
