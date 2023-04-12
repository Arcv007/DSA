// write a program to find the odd occurence of a number in giver array
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int arr[7]={4,3,5,5,4,5,5},res=0;
    for(int i=0;i<7;i++)
    {
        res=res^arr[i];
    }
    cout<<res;
    return 0;
}
