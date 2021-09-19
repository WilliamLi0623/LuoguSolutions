#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;
int a[101];
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(j!=i){
            if(a[j])
            a[j]=0;
            else
                a[j]=1;
        }
            printf("%d",a[j]);
        }
        printf("\n");
    }
}
