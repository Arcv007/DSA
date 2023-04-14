// write a program to left rotate the array by the given number
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

// left rotate a array 
void rotate(int arr[], int n, int d)
{   
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    return;
}


int main()
{
    int size,d;
    cout<<"Enter the Size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements of the array: ";
    create(arr,size);
    print(arr,size);
    cout<<"\nEnter the number of rotation: ";
    cin>>d;
    rotate(arr,size,d);
    print(arr,size);
    return 0;
}
