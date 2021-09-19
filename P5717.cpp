#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int n[3];
#define a n[0]
#define b n[1]
#define c n[2]
int main()
{
    scanf("%d%d%d",&a,&b,&c);
    sort(n,n+3);
    if((a+b<=c)||(a+c<=b)||(b+c<=a))
        {
            puts("Not triangle");
            return 0;
        }
    if(a*a+b*b==c*c)
        puts("Right triangle");
    if(a*a+b*b>c*c)
        puts("Acute triangle");
    if(a*a+b*b<c*c)
        puts("Obtuse triangle");
    if((a==b)||(b==c)||(a==c))
        puts("Isosceles triangle");
    if(a==b&&b==c)
        puts("Equilateral triangle");
}
