// Write a program to print the frequencies of the elements in the array
#include<bits/stdc++.h>
using namespace std; 

// Create the array
void create(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return ;
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

// calculate the frequencies of elements in array 
void freq(int arr[], int n)
{   
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]==arr[i])
        {
            count++;
        }
        else
        {
            cout<<arr[i]<<"  "<<count<<endl;
            count=1;
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
    cout<<endl;
    freq(arr,size);
    return 0;
}
