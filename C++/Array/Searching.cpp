// Write a program to search an element in the given array
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

// Search the element
int search(int arr[], int x, int n)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]==x)
            return i;
    }
    return -1;
}

int main()
{
    int size,target,index;
    cout<<"Enter the Size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements of the array: ";
    create(arr,size);
    cout<<"\nEnter the target element: ";
    cin>>target;
    index=search(arr,target,size);
    if(index>=0)
        cout<<"\nElements is found and its index is "<<index;
    else
        cout<<"\n Element is not found";
    return 0;
}
