//write a program to find prime number upto the given number by user
#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int k=1;k<=3;k++)
    {
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if((num==0) || (num==1))
       {
        cout<<"No prime number exists"<<endl;
       }
    for (int i=2; i<=num;i++)
    {
        for(int j=2; j<=i;j++)
        {
            if(i==j)
            {
                cout<<i<<"  ";
            }
            if(i%j==0)
            {
                break;
            }
        }
    }
    }
    return 0;
}