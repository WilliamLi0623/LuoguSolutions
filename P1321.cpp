#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<cmath>
using namespace std;

string s;
string visb;
string visg;


int findboy()
{
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='b'||s[i+1]=='o'||s[i+2]=='y')
        {
            //if(visb[i-1]==1)
            //{
                //visb[i]=1;
                //continue;
            //}
            //else
            //{
                cnt++;
              //  visb[i]=1;
            //}
        }
    }
    return cnt;
}
int findgirl()
{
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l')
        {
           // if(visg[i-1]==1)
            //{
              //  visg[i]=1;
                //continue;
            //}
            //else
            //{
                cnt++;
            //    visg[i]=1;
            //}
        }
    }
    return cnt;
}
int main()
{
    getline(cin,s);
    printf("%d\n",findboy());
    printf("%d\n",findgirl());
    return 0;
}
