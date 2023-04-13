// Write a program to find the largest element in the array
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
    cout<<"\nYour array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}

// Search the largest element
void search(int arr[], int n)
{
    int largest;
    largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if (largest<arr[i])
            largest=arr[i];
    }
    cout<<"\nThe largest element is "<<largest;
    return;
}

int main()
{
    int size,target;
    cout<<"Enter the Size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements of the array: ";
    create(arr,size);
    print(arr,size);
    search(arr,size);
    return 0;
}
