#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string s;
    int ans=0;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            ans++;
        }
    printf("%d",ans);
}
