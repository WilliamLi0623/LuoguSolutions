#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' '||s[i]=='\n')
            continue;
        ans++;
    }
    printf("%d",ans);
}
