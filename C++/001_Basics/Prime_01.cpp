//write a program to find the given number is a prime ir not
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    for(int j=1;j<=3;j++)
    {
        cout<<"Enter the number "<<endl;
        cin>>n; 
        if(n==2)
            {
                cout<<"Prime Number"<<endl<<endl;
            }
        for (int i=2; i<n;i++)
        {
            
            if(n%i==0)
            {   cout<<"Not A Prime"<<endl<<endl;
                break;
            }    
            else
            { 
                cout<<"Prime number"<<endl<<endl;
                break;
            }    
        }
    }
    return 0;
}