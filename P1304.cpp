#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

int n,tmp;
int isprime(int a)
{
    int prime=1;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            prime=0;
        }
    }
    return prime;
}

int main()
{
    scanf("%d",&n);
    for(int i=4;i<=n;i+=2)
    {
        for(int k=2;k<=n/2;k++)
        {
            if(isprime(k)==1)
            {
                if(isprime(i-k)==1)
                {
                    tmp=k;
                    break;
                }
            }
        }
        printf("%d=%d+%d\n",i,tmp,i-tmp);
    }
}
