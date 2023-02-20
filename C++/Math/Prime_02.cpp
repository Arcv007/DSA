// write a program to check weather the number is prime number or not
#include<bits/stdc++.h>
using namespace std; 

// Optimized Solution
bool prime(int n)
{
    if(n==1)
        return false;
    else if (n==2 || n==3)
        return true;
    else if (n%2==0 || n%3==0)
        return false;
            
    for (int i=5; i*i<n; i+6)
    {
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;

}

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    if(prime(num))
        cout<<"Prime number"<<endl;
    else
        cout<<"Composite number";
    return 0;
}
