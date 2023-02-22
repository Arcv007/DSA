// this program shows the implementation of shift right (>>) Operator
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int x,y;                                                    //here x is the number and y is parameter how much to shift 
    cout<<"Enter the numbers: ";
    cin>>x;
    cout<<"Enter how much to shift: ";
    cin>>y;
    cout<<"\nThe output for Shift right operation of a number is : "<<(x>>y);
    return 0;
}

 /*

    When we use right shift operator, every digit shifted to right and right most
    digit get ignored and a 0 is added to left.

    Note- 
        if we assume the leading y bits are 0
        then the result of (x>>y) is equivalent to  x/2^y


eg.  33 in binary = 00..0100001

     so,     33 >> 1  == 16

                33         100001
                33 >> 1    010000   == 16 in decimal
 */