// write a program to count the number of the set bits in the given number
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0)
    {  
        if((n&1)==1)
            count++;
        n=n>>1;
    }
    cout<<"\nThe number if set bits are "<<count;
    return 0;
}
