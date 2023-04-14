// Write a program to print the leaders of the array
// Leader means there is no element in the right which is greather than that element
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
void leader(int arr[], int n)
{   
    cout<<endl;
    int temp=-1;
    for (int i=n-1;i>=0;i--)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
            cout<<temp<<" ";
        }
    }
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
    leader(arr,size);
    return 0;
}
