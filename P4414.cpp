#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int n[3];
#define A n[0]
#define B n[1]
#define C n[2]

int main()
{
    char s[3];
    scanf("%d%d%d",&A,&B,&C);
    sort (n,n+3);
    scanf("%s",s);
    for(int i=0;i<3;i++)
    {
        switch(s[i])
        {
            case 'A':printf("%d ",A);break;
            case 'B':printf("%d ",B);break;
            case 'C':printf("%d ",C);break;
        }
    }
}
