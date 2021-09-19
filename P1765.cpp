#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;

const char a[]={"12312312312312312341231234"};

int ans=0;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            ans++;
        }
        if(s[i]>='a'&&s[i]<='z')
        {
            ans=ans+a[s[i]-'a']-48;
        }
    }
    printf("%d\n",ans);
    ans=0;
    return 0;
}
