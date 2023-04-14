// Write a program to move all zero in the array to the end
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

// move zero to end 
void move(int arr[], int n)
{
    int res=0,temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp=arr[i];
            arr[i]=arr[res];
            arr[res]=temp;
            res++;
        }
    }

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
    move(arr,size);
    print(arr,size);
    return 0;
}
