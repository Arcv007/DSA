// Write a program to find the maximum sum of the subarray of the given array
#include<iostream>
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

// calcumate maximum amount of water
// void subsum(int arr[], int n)
// {   
//     float res=0;
//     for(int i=0;i<n;i++)
//     {
//         float sum=0;
//         for(int j=i;j>=0;j--)
//         {
//             sum=sum+arr[j];
//             res=max(sum,res);
//         }
//     }
//     cout<<endl<<res;
// }

void subsum(int arr[], int n)
{   
    int res=arr[0];
    int maxend=arr[0];
    for(int i=1;i<n;i++)
    {
        maxend=max(maxend+arr[i],arr[i]);
        res=max(maxend,res);   
    }
    cout<<endl<<res;
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
    subsum(arr,size);
    return 0;
}
