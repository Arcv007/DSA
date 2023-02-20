//write a program to print the prime number upto the given number
#include <iostream>
using namespace std; 

// to print prime number
void priprime(int n)
{
    if(n==1)
        return;
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
            priprime(n-1);
    }
    cout<<" "<<n;
    priprime(n-1);
}

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    priprime(num);
    return 0;
}
