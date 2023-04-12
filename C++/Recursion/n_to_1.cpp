//write a program to print numbers from n to 1  using recursion 
#include<bits/stdc++.h>
using namespace std; 

//function to print the number
void fun(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";
    fun(n-1);
}
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    fun(num);
    return 0;
}
