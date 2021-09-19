#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

string s,s1,s2;
int tmp,nozero;
int special=0;
int allzero=1;
int main()
{
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='/')
        {
            tmp=i;
            special=1;
            break;
        }
        else
            if(s[i]=='.')
            {
                tmp=i;
                s1.assign(s,0,i-1);
                s2.assign(s,i+1,s.size()-1);
                special=2;
                break;
            }
        else
            if(s[s.size()-1]=='%')
            {
                special=3;
                break;
            }
        else
            if(s[i-1]!=0)
        {
            allzero=0;
            break;
        }
    }
    switch(special)
    {
        case 0 :
            if(allzero==1)
            {
                printf("0");
                return 0;
            }
            else
            {
                for(int i=s.size()-1;i>=0;i--)
                {
                    if(s[i]=='0'&&nozero==0)
                    {
                        if(s[i-1]!='0')
                        {
                            nozero=1;
                            continue;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    nozero=1;
                    printf("%c",s[i]);
                }
            }
                break;
        case 1 :
            if(s[0]=='0'&&tmp==1)
                {
                    printf("0");
                    printf("/");
                nozero=0;
                for(int j=s.size()-1;j>tmp;j--)
                {
                    if(s[j]=='0'&&nozero==0)
                    {
                        if(s[j-1]!='0')
                        {
                            nozero=1;
                            continue;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    else
                    {
                        nozero=1;
                        printf("%c",s[j]);
                    }
                }
                return 0;
                }
            else
            {
                nozero=0;
                for(int j=tmp-1;j>=0;j--)
                {
                    if(s[j]=='0'&&nozero==0)
                    {
                        if(s[j-1]!='0')
                        {
                            nozero=1;
                            continue;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    else
                    {
                        nozero=1;
                        printf("%c",s[j]);
                    }
                }
                printf("/");
                nozero=0;
                for(int j=s.size()-1;j>tmp;j--)
                {
                    if(s[j]=='0'&&nozero==0)
                    {
                        if(s[j-1]!='0')
                        {
                            nozero=1;
                            continue;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    else
                    {
                        nozero=1;
                        printf("%c",s[j]);
                    }
                }
            }
                break;
        case 2 :
                if(s[0]=='0'&&s[1]=='.')
                {
                    printf("0");
                }
                else
                {
                    for(int j=tmp-1;j>=0;j--)
                {
                    if(s[j]=='0'&&nozero==0)
                    {
                        if(s[j-1]!='0')
                        {
                            nozero=1;
                            continue;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    else
                    {
                        printf("%c",s[j]);
                    }
                }
            }
                printf(".");
                nozero=0;
                if(s2.size()==1)
                {
                    printf("0");
                    return 0;
                }
                else
                {
                    for(int j=0;j<s2.size();j++)
                {
                    if(s2[j]=='0'&&nozero==0)
                    {
                        if(s2[j+1]!='0')
                        {
                            nozero=1;
                            s2[j]=' ';
                            break;
                        }
                        else
                        {
                            s2[j]=' ';
                            continue;
                        }
                    }
                }
                for(int j=s2.size()-1;j>=0;j--)
                {
                    if(s2[j]==' ')
                    {
                        continue;
                    }
                    else
                    {
                        printf("%c",s2[j]);
                    }
                }
                }
                break;
        case 3 :
            if(s[0]=='0'&&s[1]=='%')
                {
                    printf("0");
                    puts("%");
                    break;
                }
            else
            {
                for(int k=s.size()-2;k>=0;k--)
                {
                    if(s[k]=='0'&&nozero==0)
                    {
                        if(s[k-1]!='0')
                        {
                            nozero=1;
                            continue;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    else
                    {
                        nozero=1;
                        printf("%c",s[k]);
                    }
                }
                puts("%");
            }
                break;
    }
}
