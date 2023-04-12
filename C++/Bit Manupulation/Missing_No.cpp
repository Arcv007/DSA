// write a program to print the missing number form the given set of natural no.
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int arr[6]={1,2,5,3,6},num=0;
    for(int i=0;i<6;i++)
    {
        num=num^arr[i]^i+1;
    }
    cout<<num;
    return 0;
}
