#include<cstdio>
#include<cmath>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

string a;

long long c(long long n,long long m)
{
    if(m<n-m)
    {
        m=n-m;
    }
    long long ans=1;
    for(int i=m+1;i<=n;i++)
    {
        ans*=i;
    }
    for(int i=1;i<=n-m;i++)
    {
        ans/=i;
    }
    return ans;
}

long long ans,tmp,cnt;
int main()
{
    getline(cin,a);
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==' ')
        {
            continue;
        }
        else
        {
            tmp=tmp+a[i]-48;
        }
    }
    cout<<tmp<<endl;
    for(int j=0;j<=(a.size()+1)/2;j++)
    {
        cnt+=c((a.size()+1)/2,j);
    }
    ans=cnt*tmp/2;
    printf("%lld",ans);
}
