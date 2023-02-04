/*write a program to print the pattern where no of row and column entered by user
   12345
   1234
   123
   12
   1
*/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the limit";
    cin>>n;
    for (int i=n ; i>0; i--)
    {
        for (int j=1 ; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}