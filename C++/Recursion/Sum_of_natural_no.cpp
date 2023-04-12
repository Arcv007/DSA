// write a program to find the sum of the natural numbers upto the given number using recursion 
#include<bits/stdc++.h>
using namespace std; 

//function
int sum(int n)
{
    if(n==0)
        return 0;
    return n + sum(n-1) ;

}


// Main function
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<sum(num);
    return 0;
}
