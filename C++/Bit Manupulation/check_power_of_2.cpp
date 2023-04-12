// to check weather the number is power of two or not
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n<=0)
        cout<<"False";
    if((n &(n-1))== 0)
        cout<<"True";
    else
        cout<<"false";
    return 0;
}
