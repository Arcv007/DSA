// write a program to print the factorial of the given number
#include<bits/stdc++.h>
using namespace std;
 
// A recurrsive function to calculate the factorial 
int fact(int n,int num)
{
    if (n==0)
        return num;
    num=num*n;
    fact(n-1,num);    
}

int main()
{
    int x,fac;
    cout<<"Enter the number: ";
    cin>>x;
    fac=fact(x,1);
    cout<<"\nThe factorial of the number is "<<fac;
    return 0;
}
