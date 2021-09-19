#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


struct
{
    char name[100];
    int age;
    int score;
}info[1000];


int a,tmp;
int main()
{
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%s %d %d",info[i].name,&info[i].age,&info[i].score);
    }
    for(int i=0;i<a;i++)
    {
        tmp=info[i].score;
        if(tmp*120/100>=600)
        {
            info[i].score=600;
        }
        else
        {
            info[i].score=info[i].score*120/100;
        }
        printf("%s %d %d\n",info[i].name,info[i].age+1,info[i].score);
    }
}
