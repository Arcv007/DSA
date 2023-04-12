// write a program to print the binary equivalent of the givrn decimal number using recursion
#include<bits/stdc++.h>
using namespace std; 

//function for cunversion
void fun(int n)
{
    if(n==0)
        return;
    fun(n/2);
    cout<<n%2;
    return;
}

//Main function
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    fun(num);
    return 0;
}
