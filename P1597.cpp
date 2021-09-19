#include<cstdio>
using namespace std;

int t[3];char a,b;
int main()
{
    while (scanf("%c:=%c;",&a,&b)==2)
     {
         if(b>='0'&&b<='9')
         {
             t[a-'a']=b-'0';
         }
         else
         {
             t[a-'a']=t[b-'a'];
         }
     }
    printf("%d %d %d",t[0],t[1],t[2]);
}
