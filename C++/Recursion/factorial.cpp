//write a program to print the factorial of the given number using recursion 
#include<bits/stdc++.h>
using namespace std; 

// Function for the factorial
int fact(int n)
{
    if (n==0 || n==1)
        return 1;
    return n*fact(n-1);
}

//Main Function
int main()
{
    int num,ans;
    cout<<"Enter the number";
    cin>>num;
    ans=fact(num);
    cout<<"\nThe factorial of the number is "<<ans;
    return 0;
}
