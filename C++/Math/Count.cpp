// write a program to count a digit of the given number
#include<bits/stdc++.h>
using namespace std; 


// iteration method
int count1(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

// Recursive method
int count2(int n)
{
    if (n==0)
    {
        return 0;
    }
    return 1+ count2(n/10);
}

// Logrithmic method
int count3(int n)
{
    return log10(n)+1;

}

// main function
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for (int i=0; i<3; i++)
    {
        int t,ans;
        cout<<"\n For Iteration method: 1";
        cout<<"\n For Recusive method: 2";
        cout<<"\n For Logrithmic method: 3"<<endl;
        cin>>t;
        //switch case for the selection of method
        switch (t)
        {
            case 1:
                ans=count1(n);
                break;
            case 2:
                ans=count2(n);
                break;
            case 3:
                ans=count3(n);
                break;
            
            default:
                cout<<"\n Enter a valid from above";
                break;
        }
        cout<<"\nThe number of digit are: "<<ans<<endl;
    }
    return 0;
}
