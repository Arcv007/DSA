// Write a program which prints the maximum difference of element arr[j]-arr[i] such that j>i
#include<bits/stdc++.h>
using namespace std; 

// Create the array
int *create(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return arr;
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

// left rotate a array 
void freq(int arr[], int n)
{   
    int res=arr[1]-arr[0];
    int minval=arr[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,arr[i]-minval);
        minval=min(minval,arr[i]);
    }
    cout<<res;
    return;
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
    freq(arr,size);
    return 0;
}
