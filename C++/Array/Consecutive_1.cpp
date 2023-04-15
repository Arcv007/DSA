// Calculate the maximum numv=ber of the consecutive 1's in given binary array
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
void consecutive(int arr[], int n)
{   
    int res=0,count=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            count=0;
        else
        {
            count++;
            res=max(res,count);
        }
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
    consecutive(arr,size);
    return 0;
}
