// Write a program to find the maximum sum of the circular subarray of the given array
#include<iostream>
using namespace std; 

// Create the array
void create(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return ;
}

// Print the array
void print(int arr[], int n)
{
    cout<<"\nYour Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}

int subsum(int arr[], int n)
{   
    int res=arr[0];
    int maxend=arr[0];
    for(int i=1;i<n;i++)
    {
        maxend=max(maxend+arr[i],arr[i]);
        res=max(maxend,res);   
    }
    return res;
}

void oversubsum(int arr[], int n)
{
    int maxsum=subsum(arr,n);
    if(maxsum<0)
        cout<<endl<<maxsum;
    int arrsum=0;
    for(int i=0;i<n;i++)
    {
        arrsum+=arr[i];
        arr[i]=-arr[i];
    }
    int maxcircular=arrsum+subsum(arr,n);
    cout<<endl<<max(maxsum,maxcircular);
}

int main()
{
    int size;
    cout<<"Enter the Size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements of the array: ";
    create(arr,size);
    print(arr,size);
    cout<<endl;
    oversubsum(arr,size);
    return 0;
}
