// Write a program to print the M number of N-Bonacci series
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n,sum=0;
    cout<<"Enter the value of N and M: ";
    cin>>n>>m;
    vector<int> num(m);
    num[n-1]=1;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        sum=sum+num[i];
        cout<<num[i]<<" ";   
    }
    for(int i=n;i<m;i++)
    {
        num[i]=sum;
        sum=sum+num[i]-num[i-n];
        cout<<num[i]<<" ";
    }
    return 0;
}
