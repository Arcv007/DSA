// Write a program to calculate the maximum profit from stocks when the future prices of the stock is given
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

// calcumate maximum price
void stock(int arr[], int n)
{   
    int price=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>arr[i])              
        {
            price=price+(arr[i+1]-arr[i]);
        }
    }
    cout<<price;
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
    stock(arr,size);
    return 0;
}
