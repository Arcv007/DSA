// write a program to print the prime factor of given number
#include<bits/stdc++.h>
using namespace std; 

// to check weather the number is prime or not
bool isprime(int n, int i)
{
    if (i==n)
        return true;
    if(n%i==0)
        return false;
    else
        isprime(n,i+1);
}

// to print the prime factors
void primefact(int n)
{
    for(int i=2; i<n; i++)
    {
        if(isprime(i,2))        //to check wheather the number is prime or not
        {
            int x=i;            //here we using x because a number has two same prime factors like 12= 2*2*3
            while(n%x==0)
            {
                cout<<i<<endl;
                x=x*i;          //here we setting x to multiple of i so check wheather the multiple of i can divide or not
            }
        }
    } 
    return;   
}


// main function
int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    primefact(num);
    return 0;
}
