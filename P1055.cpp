#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    string s,a;
    getline(cin,s);
    a=s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='-')
            s.erase(i,1);
    }
    long long t=0;
    for(int i=1;i<=9;i++)
    {
        t+=i*(s[i-1]-'0');
    }
    t=t%11;
    if(s.back()-'0'==t)
        puts("Right");
    else
    {
        if(s.back()=='X'&&t==10)
            puts("Right");
        else
        {
            for(int i=0;i<a.size()-1;i++)
            {
                printf("%c",a[i]);
            }
            if(t!=10)
            printf("%d\n",t);
            else
                printf("X\n");
        }
    }
    return 0;
}
