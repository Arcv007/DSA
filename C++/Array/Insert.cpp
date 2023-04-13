// Write a program to insert an element in the given array
// Note: We can only insert in the array when the given array is not completely full
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
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}

// Insert the element
int *insert(int arr[], int a, int position, int n)
{
    int i;
    for(i=n;i>position;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=a;
    return arr;
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
    cout<<"\nEnter the element want to insert: ";
    cin>>element;
    cout<<"\nEnter the index of the element where you want to insert: ";
    cin>>index;
    insert(arr,element,index,size);
    print(arr,size);
    return 0;
}
