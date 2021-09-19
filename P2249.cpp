#include<iostream>
#include<map>
using namespace std;
map<int,int>a;
int main()
{
	int m,n,k,l=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>k;
		if(l!=k){
			a[k]=i;
			l=k;
		}
	}
	for(int i=0;i<m;i++)
	{
		cin>>k;
		if(a.count(k))cout<<a[k]<<' ';
		else cout<<-1<<' ';
	}
	return 0;
}
