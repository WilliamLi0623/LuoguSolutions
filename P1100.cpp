#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<cmath>
using namespace std;


int n;




int main()
{
    scanf("%u",&n);
    printf("%u\n",(n<<16)+(n>>16));
    return 0;
}
