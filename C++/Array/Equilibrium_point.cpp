// Write a program to find the equilibrium point in the given array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={3,4,8,-9,20,6};
    int n=arr.size();
    vector<int> pre_sum(n);
    vector<int> post_sum(n);
    pre_sum=arr;
    post_sum=arr;
    int sum=arr[0];
    for(int i=0;i<n;i++)
    {
        pre_sum[i]=arr[i]+sum;
        sum=pre_sum[i];
    }
    int sum=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        post_sum[i]=arr[i]+sum;
        sum=post_sum[i];
    }
    for(int i=1;i<n-1;i++)
    {
        if(pre_sum[i-1]==post_sum[i+1])
            cout<<i;
    }
    return 0;
}
