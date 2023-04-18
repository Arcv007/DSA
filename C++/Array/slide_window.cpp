// Wirte a program to calculate the fum of three consecutive numbers
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


int sum(int arr[], int n, int k)
{   
    int sum=0;
    for (int i=0;i<k;i++)
    {   
        sum=sum+arr[i];
    }
    int sum1=sum;
    for(int i=k;i<n;i++)
    {
        sum1=sum1-arr[i-k]+arr[i];
        sum=max(sum,sum1);
    }
    cout<<sum;
 
}

int main()
{
    int size,k;
    cout<<"Enter the Size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements of the array: ";
    create(arr,size);
    cout<<"\nEnter the number of elements: ";
    cin>>k;
    print(arr,size);
    cout<<endl;
    sum(arr,size,k);
    return 0;
}
