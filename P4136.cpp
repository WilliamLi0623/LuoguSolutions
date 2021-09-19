#include<cstdio>
using namespace std;


int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
            if(n%2==0)
        {
            printf("Alice\n");
        }
        if(n%2==1)
        {
            printf("Bob\n");
        }
    }
    return 0;
}
