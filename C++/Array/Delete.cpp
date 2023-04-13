// Write a program to delete an element in the given array
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

// delete the element
int del(int arr[], int a, int n)
{   
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
            break;
    }
    if(n==i)
        return n;
    for(int j=i;j<n;j++)
    {
        arr[j]=arr[j+1];
    }
    return n-1;
}

int main()
{
    int element,ele,size;
    cout<<"Enter the Size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements of the array: ";
    create(arr,size);
    print(arr,size);
    cout<<"\nEnter the element which you want to delete: ";
    cin>>ele;
    size=del(arr,ele,size);
    print(arr,size);
    return 0;
}
