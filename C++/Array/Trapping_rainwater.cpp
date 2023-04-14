// write a progrsm to calculate the amount of that can be collected wihtin the given height of the bars
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
void water(int arr[], int n)
{   
    int lmax[n],rmax[n],res=0;

    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    print(lmax,n);

    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(arr[i],rmax[i+1]);
    }
    print(rmax,n);
    for(int i=1;i<n-1;i++)
    {
        res=res+min(lmax[i],rmax[i])-arr[i];
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
    water(arr,size);
    return 0;
}
