/*write a program to print the pattern where no of row and column entered by user
       * * * *  
      * * * *
     * * * *
    * * * *
*/ 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of the rhombus";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for (int j=1;j<=n;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}

/*
My hit and trial method output but is still prints the rhombus

int main()
{
    int n;
    cout<<"enter the length of the rhombus";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=((2*n)-i);j>0;j--)
        {
            if(j>n)
            {
              cout<<" ";
              continue;  
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/