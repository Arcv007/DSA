// this program shows the implementation of EX-OR (^) Operator
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int x;
    cout<<"Enter the two numbers: ";
    cin>>x;
    cout<<"\nThe EX-OR operation of two numbers are : "<<(~x);
    return 0;
}

/* 
eg.  3 in binary = 00..00011
     6 in binary = 00..00110

     so,     3 & 6  == 2

                    0011
                    0110
                    ----
                    0101  ==  5 in decimal */