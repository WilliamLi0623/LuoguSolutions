#include<cstdio>

using namespace std;

bool flag;
int main()
{
    int n,a;
    scanf("%d%d",&n,&a);
    if(n%100==0)
    {
        if(n%400==0)
        {
            flag=true;
        }
        else
        {
            flag=false;
        }
    }
    else
    {
        if(n%4==0)
        {
            flag=true;
        }
        else
        {
            flag=false;
        }
    }
    if(a==2)
    {
        if(flag==true)
        {
            printf("29");
        }
        else
        {
            printf("28");
        }
    }
    else
    {
        switch(a)
        {
            case 1:printf("31");break;
            case 3:printf("31");break;
            case 5:printf("31");break;
            case 7:printf("31");break;
            case 8:printf("31");break;
            case 10:printf("31");break;
            case 12:printf("31");break;
            default:printf("30");break;
        }
    }
}
