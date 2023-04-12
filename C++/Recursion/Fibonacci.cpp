// Write a program to find the nth term of fibonacci series using recursion 
#include<bits/stdc++.h>
using namespace std; 

// Function for the fibonacci number
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}

// Main Function
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<fib(num);
    return 0;
}
