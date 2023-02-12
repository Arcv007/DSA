// write a program to find  geometric progression
#include<bits/stdc++.h>
using namespace std; 

// for Recurrsive method
void recursive(int a, int n, int r)
{
    if (n==0)
        return;
    cout<<(a)<<", ";
    a=a*r;
    recursive(a,n-1,r);    
    return;
}

// for Iterative method
void iterative(int a, int n, int r)
{
    int sum,ave;
    for(int i=0;i<n;i++)
    {
        cout<<a*pow(r,i)<<", ";
    }

    return;
}

int main()
{
    int x;
    int a,n,r;
    cout<<"Enter first term"<<endl;
    cin>>a;
    cout<<"\nEnter number of term"<<endl;
    cin>>n;
    cout<<"\nEnter commom ratio"<<endl;
    cin>>r;


    for (int i=0;i<2;i++)
    {
        cout<<"\nFor iterative method: 1"<<endl;
        cout<<"For recurrsive method: 2"<<endl;
        cin>>x;
        //switch case for selection
        switch (x)
        {
        case 1:
            iterative(a,n,r);
            break;
        case 2:
            recursive(a,n,r);
            break;
        
        default:
            cout<<"Enter valid input"<<endl;
            break;
        } 
    }
    return 0;
}
