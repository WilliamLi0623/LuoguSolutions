#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;


int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int suma=1;
    int sumb=1;
    for(int i=0;i<a.size();i++)
    {
        suma=suma*(a[i]-'A'+1);
    }
    for(int i=0;i<b.size();i++)
    {
        sumb=sumb*(b[i]-'A'+1);
    }
    if(suma%47==sumb%47)
    {
        printf("GO");
    }
    else
    {
        printf("STAY");
    }
}
