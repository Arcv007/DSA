/*write a program to print the pattern where no of row and column entered by user

       *
      * *
     * * *
    * * * *
     * * *
      * *
       *  

*/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<= n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
     }



      for (int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=n-i; j>0;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
     }
    return 0;
}