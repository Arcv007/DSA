// Write a program to linear search the element
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
void binary(int arr[], int n)
{   
    int target;
    cout<<"\nEnter the target elements: ";
    cin>>target;    
    for (int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<"Index is: "<<i;
            return;
        }    
    }
    cout<<"\nElement not found";
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
    binary(arr,size);
    return 0;
}
