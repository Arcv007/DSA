/*write a program to print the pattern where no of row and column entered by user
   ****
   *  *
   *  *
   *  *
   ****
*/ 
#include<iostream>
using namespace std;

int main()
{
    int row,column;
    cout<<"enter the value of row and column";
    cin>>row>>column;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
        if(i==1 || i==row || j==1 || j==column)
            cout<<"*";
        else
            cout<<" ";    
        }
        cout<<endl;
    }
    return 0;
}