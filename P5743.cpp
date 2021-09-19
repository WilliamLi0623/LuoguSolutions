#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int a,ans=1;

int eat()
{
    ans=(1+ans)*2;
    return ans;
}

int main()
{
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        eat();
    }
    printf("%d",ans);
}
