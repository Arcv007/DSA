//write a program to finds the roots of the quadratic equation
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,d,root1,root2;
    cout<<"The Quadratic equation is given by\n Ax^2+bx+c=0\n Enter the value of the a, b and c respectively"<<endl;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if (d>0)
    {
        cout<<"Roots are Real"<<endl;
        root1=(-b+sqrt(d))/2*a;
        root2=(-b-sqrt(d))/2*a;
        cout<<"The roots of the equation are "
    }

}