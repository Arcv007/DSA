// write a program to print the sum of the digits of given number using recursion 
#include<bits/stdc++.h>
using namespace std; 

// recurssive function 
int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n/10) + n%10; 
}

int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<sum(num);
    return 0;
}
