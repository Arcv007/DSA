/*write a program to print the pattern where no of row and column entered by user
       1
      1 2
     1 2 3
    1 2 3 4
    
*/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}