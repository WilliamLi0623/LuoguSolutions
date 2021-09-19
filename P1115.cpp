#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int a[200001];
int ans[200001];
int sum=-9999999;
int main()
{
    int n,maxn=-10001;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        ans[i]=max(ans[i-1]+a[i],a[i]);
        sum=max(sum,ans[i]);
    }
    printf("%d",sum);
    return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n[200001],p,ans[200001]={0};
//    int sum=-9999999;//|x|<=10000   QWQ
//    cin>>p;
//    for(int i=1;i<=p;i++)
//    {
//        cin>>n[i];//输入
//        ans[i]=max(ans[i-1]+n[i],n[i]);//DP
//        sum=max(sum,ans[i]);//取最大值也同时进行，节约时间
//    }
//    cout<<sum;//直接输出
//    return 0;
//}
