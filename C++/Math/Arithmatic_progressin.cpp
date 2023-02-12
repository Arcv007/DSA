// write a program to find airthmetic progression
#include<bits/stdc++.h>
using namespace std; 

// for Recurrsive method
void recursive(int a, int n, int d)
{
    if (n==0)
        return;
    cout<<(a)<<", ";
    a=a+d;
    recursive(a,n-1,d);    
    return;
}

// for Iterative method
void iterative(int a, int n, int d)
{
    int sum,ave;
    for(int i=1;i<=n;i++)
    {
        cout<<a+(i-1)*d<<", ";
    }

    return;
}

int main()
{
    int x;
    int a,n,d;
    cout<<"Enter first term"<<endl;
    cin>>a;
    cout<<"\nEnter number of term"<<endl;
    cin>>n;
    cout<<"\nEnter commom diffrence"<<endl;
    cin>>d;


    for (int i=0;i<2;i++)
    {
        cout<<"\nFor iterative method: 1"<<endl;
        cout<<"For recurrsive method: 2"<<endl;
        cin>>x;
        //switch case for selection
        switch (x)
        {
        case 1:
            iterative(a,n,d);
            break;
        case 2:
            recursive(a,n,d);
            break;
        
        default:
            cout<<"Enter valid input"<<endl;
            break;
        } 
    }
    return 0;
}
