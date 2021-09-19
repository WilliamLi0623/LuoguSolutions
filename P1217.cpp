#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

int a,b,tmp;
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
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {

    }
}
