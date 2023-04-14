// Write a program to reverse an array

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

// Reverse the array without high and low
/* void reverse(int arr[], int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    return;
} */

// Reverse the array with high and low
void reverse (int arr[],int low, int high)
{   
    while(high>low)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        high--;
        low++;
    }
    return;
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
    reverse(arr,0,size-1);
    print(arr,size);
    return 0;
}

