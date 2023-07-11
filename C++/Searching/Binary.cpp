// write a program to binary search the element
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

int binary(int arr[], int n)
{   
    int target;
    cout<<"\nEnter the target elements: ";
    cin>>target; 
    int high=n-1,low=0;
    int mid=(high+low)/2;   
    for (int i=0;i<=n/2;i++)
    {
        if(arr[mid]==target)
            return mid;

        else if(target>mid)
        {
            low=mid+1;
            mid=(high+low)/2;   
        }
        else
        {
            high=mid-1;
            mid=(high+low)/2;
        }
    }
    return -1;
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
    cout<<binary(arr,size);
    return 0;
}
