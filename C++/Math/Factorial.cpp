// write a program to calculate the factorial of given number
#include<bits/stdc++.h>
using namespace std; 

// Recursive method to find factorial a number
int factorial(int n, int digit)
{
    digit=digit*n;
    if (n==1)
        return digit;
    factorial(n-1,digit);
}

int main()
{
    int num;
    for (int i=0;i<3;i++)
    {
        cout<<"\nEnter the number: ";
        cin>>num;
        cout<<"The factorial of the number is "<<factorial(num,1); 
    } 
    return 0;
}
