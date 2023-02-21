// this program shows the implementation of OR (|) Operator
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int x,y;
    cout<<"Enter the two numbers: ";
    cin>>x>>y;
    cout<<"\nThe OR operation of two numbers are : "<<(x|y);
    return 0;
}

/* 
eg.  3 in binary = 00..00011
     6 in binary = 00..00110

     so,     3 | 6  == 2

                    0011
                    0110
                    ----
                    0111  ==  7 in decimal */