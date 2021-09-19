#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;


int main()
{
    int a,b;
    int ans=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
            if(abs(i)%2==1||abs(i)%4==0)
        {
            ans++;
        }
        }
    printf("%d",ans);
}
