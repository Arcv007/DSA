// Write a program to find the nth term of fibonacci series using recursion 
#include<bits/stdc++.h>
using namespace std; 

// Function for the fibonacci number
void fib(int n,int i,int j)
{
    int ans;
    if(n==2)
        return;
    ans=i+j;
    cout<<ans<<" ";
    fib(n-1,ans,i);
}

// Main Function
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<"0 1 ";
    fib(num,1,0);
    return 0;
}
