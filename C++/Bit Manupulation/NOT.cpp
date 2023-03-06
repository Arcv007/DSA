// this program shows the implementation of Binary NOT (~) Operator
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int x;
    cout<<"Enter the a numbers: ";
    cin>>x;
    cout<<"\nThe NOT operation of a numbers are : "<<(~x);
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