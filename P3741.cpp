#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<cmath>
using namespace std;
    string s;
int ans=0;
int n;
int findvk()
{
    int lastfind=0;
    int cnt=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='V'&&s[i+1]=='K')
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    getline(cin,s);
    getline(cin,s);
    ans=findvk();
    for(int j=0;j<s.size();j++)
    {
        if(s[j]=='V')
        {
            s[j]='K';
            ans=max(ans,findvk());
            s[j]='V';
        }
        if(s[j]=='K')
        {
            s[j]='V';
            ans=max(ans,findvk());
            s[j]='K';
        }
    }
    printf("%d",ans);
    return 0;
}
