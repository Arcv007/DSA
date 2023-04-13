// Write a program to find the second largest element in the array
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
    int largest,res;
    largest=0;
    res=-1;
    for(int i=0;i<n;i++)
    {
        if (largest<arr[i])
        {
            res=largest;
            largest=arr[i]; 
        }
        else if(arr[i]!= largest)
        {
            if(res==-1 || arr[i]>res)
                res=arr[i];
        }   
    }
    if(res>0)
        cout<<"\nThe largest element is: "<<largest<<" and second largest element is: "<<res;
    else
        cout<<"\nThe largest element is: "<<largest<<" and no second largest element is found "; 
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
