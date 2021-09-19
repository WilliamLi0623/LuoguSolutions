#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int mp[13][13];

int main()
{
    int n;
    scanf("%d",&n);
    for(;;)
    {
        int tmp1,tmp2,tmp3;
        scanf("%d%d%d",&tmp1,&tmp2,&tmp3);
        if(tmp1==0&&tmp2==0&&tmp3==0)
        {
            break;
        }
        else
        mp[tmp1][tmp2]=tmp3;
    }
}
