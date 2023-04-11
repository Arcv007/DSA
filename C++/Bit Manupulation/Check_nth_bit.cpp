// write a program to check th nth bit of the given number is set or not
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n,k;
    cout<<"Enter the number: ";
    cin>>n;
    
    cout<<"\nEnter the digit to check: ";
    cin>>k;

    //Using Left shift operator
    if((n & (1<<(k-1))) !=0)
    {
        cout<<"Yes";
    }    
    else    
    {   
        cout<<"No";
    }

     
    /* 
    //using right shift operator
    if((n>>(k-1) & 1)!=0)
    {
        cout<<"Yes";
    }    
    else    
    {   
        cout<<"No";
    }  
    */
       
    return 0;
}
