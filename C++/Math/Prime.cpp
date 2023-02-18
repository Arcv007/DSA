// write a program to check weather the number is prime number or not
#include<bits/stdc++.h>
using namespace std; 

// To check Prime or not
bool prime(int n)
{
    if(n==1)
        return false;
    for (int i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
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
