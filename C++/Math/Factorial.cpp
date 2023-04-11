// write a program to calculate the factorial of given number
#include<bits/stdc++.h>
using namespace std; 

// Recursive method to find factorial a number
int factorial(int n)
{
    
    if (n==1)
        return 1;
    return n*factorial(n-1);
}

int main()
{
    int num;
    for (int i=0;i<3;i++)
    {
        cout<<"\nEnter the number: ";
        cin>>num;
        cout<<"The factorial of the number is "<<factorial(num); 
    } 
    return 0;
}
