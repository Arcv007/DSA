/*write a program to print the pattern where no of row and column entered by user
   ****
   ****
   ****
   ****
   ****
*/ 

#include<iostream>
using namespace std;

int main()
{
    int row,col,i,j;
    cout<<"Enter the value of row and column";
    cin>>row>>col;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}