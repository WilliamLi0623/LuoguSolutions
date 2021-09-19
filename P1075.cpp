#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;


int n;


int main()
{
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d",n/i);
            return 0;
        }
    }
    return 0;
}
