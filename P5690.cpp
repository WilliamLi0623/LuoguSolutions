#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;



int ans,a,c;
char b;
int main()
{
    scanf("%d%c%d",&a,&b,&c);
    if(a==2){
        if(c>28&&c<32)
            ans++;
        else
            ans+=2;
    }
    if(a>12)
    {
            ans++;
        if(c>31)
            ans++;
        if(c==0)
            ans++;
    }
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    {
        if(c>31)
            ans++;
        if(c==0)
            ans++;
    }
    if(a==4||a==6||a==9||a==11)
    {
        if(c>30)
            ans++;
        if(c==0)
            ans++;
    }
    if(a==0)
    {
        ans++;
        if(c>31)
            ans++;
        if(c==0)
            ans++;
    }
    printf("%d",ans);
}

