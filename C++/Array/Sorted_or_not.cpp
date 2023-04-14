// Write a program to check weather the array is sorted or not
#include<bits/stdc++.h>
using namespace std; 

// Create the array
void create(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return;
}

// Print the array
void print(int arr[], int n)
{
    cout<<"Your Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}

// Check sorted or not
bool check(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}

int main()
{
    int element,index,size;
    cout<<"Enter the Size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements of the array: ";
    create(arr,size);
    print(arr,size);
    if(check(arr,size))
        cout<<"\nYes";
    else
        cout<<"\nNo";    
    return 0;
}
