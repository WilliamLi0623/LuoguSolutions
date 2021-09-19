#include<cstdio>
#include<iostream>
using namespace std;


int main()
{
    double m,h;
    scanf("%lf%lf",&m,&h);
    if((m/(h*h))<18.5)
    {
        printf("Underweight");
    }
    else if((m/(h*h))>=18.5&&(m/(h*h))<24)
    {
        printf("Normal");
    }
    else
    {
        cout<<(m/(h*h))<<endl<<"Overweight"<<endl;
    }
}
