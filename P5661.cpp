#include<cstdio>
#include<cmath>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
#define maxn 10001
struct tkt
{
    int a;
    int p;
    int t;
    int b;
    int e;
//    bool operator <(const tkt &e1)const {
//        return e>e1.e;
//    }
}l[maxn];
bool cmp(const tkt &e1,const tkt &e2){
return e1.e<e2.e;
}

priority_queue<tkt>q;
vector<tkt>cp;
int tm=0,cost=0;
bool flag=true;

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
        scanf("%d%d%d",&l[i].a,&l[i].p,&l[i].t);
        l[i].b=tm;
        l[i].e=tm+l[i].t;
        tm+=l[i].t;
        }
    for(int i=0;i<n;i++)
    {
        if(!l[i].a)
        {
            cp.emplace_back(l[i]);
            cost+=l[i].p;
            sort(cp.begin(),cp.end(),cmp);
//            q.push(l[i]);
//            cost+=l[i].p;
        }
        else
        {
            for(int j=0;j<sizeof(cp);j++)
            {
                if(cp[0].p>=l[i].p)
                    if(l[i].b-cp[0].e<=45)
                        {
                            cp.erase(cp.begin()+j);
                        sort(cp.begin(),cp.end(),cmp);
                        flag=true;
                        break;
                        }
                        else
                            flag=false;
                        else flag=false;
            }
            if(!flag)
            {
                cost+=l[i].p;
            }
//            if(q.top().p>=l[i].p)
//                if(q.top().e+45>=l[i].b)
//                    q.pop();
//                else
//                    cost+=l[i].p;
//                else
//                    cost+=l[i].p;
        }
    }
    printf("%d",cost);
}
