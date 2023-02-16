// write a program to print LCM of two numbers
#include<bits/stdc++.h>
using namespace std; 

// general solution
void general(int n1, int n2)
{
    int res=2;
    while(res<n1)
    {
        if(n1%res==0 && n2%res==0)
        {
            break;
        }
        res++;
    }
    cout<<"\nThe LCM of the two numbers are "<<res;
}

int main()
{
    int num1,num2,n;
    cout<<"Enter the numbers :";
    cin>>num1>>num2;
    cout<<"\nFor general solution: 1"<<endl;
    cout<<"For advance solution: 2"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        general(num1,num2);
        break;
 /*    case 2:
        advance(num1,num2);
        break; */
    
    default:
        cout<<"Enter valid input";
        break;
    }
    return 0;
}
