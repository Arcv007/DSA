// this program shows the implementation of shift left (<<) Operator
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int x,y;                                                    //here x is the number and y is parameter how much to shift 
    cout<<"Enter the numbers: ";
    cin>>x;
    cout<<"Enter how much to shift: ";
    cin>>y;
    cout<<"\nThe output for Shift left operation of a number is : "<<(x<<y);
    return 0;
}

/* 

    When we use left shift operator, every digit shifted to left and left most
    digit get ignored and a 0 is added to right.

    Note- 
        if we assume the leading y bits are 0
        then the result of (x<<y) is equivalent to  x*2^y


eg.  3 in binary = 00..00011

     so,     3 << 1  == 6

                3         0011
                3 << 1    0110   == 6 in decimal
 */