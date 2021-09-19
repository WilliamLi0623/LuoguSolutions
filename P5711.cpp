#include<cstdio>

using namespace std;


int main()
{
    int n;
    scanf("%d",&n);
    if(n%100==0)
    {
        if(n%400==0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        if(n%4==0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}
