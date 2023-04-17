// write a program to convert a binary array in identical by minimum number of consecutive flips
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


void min_flip(int arr[], int n)
{  
  int count=0,count1=0,j=0,k=0; 
  int arr1[n],arr2[n];  
  for (int i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
        arr1[j++]=i;
        if(arr[i+1]!=0)
            count++;
    }
  }
  for (int i=0;i<n;i++)
  {
    if(arr[i]==1)
    {
        arr2[k++]=i;
        if(arr[i+1]!=1)
            count1++;
    }
  }
  if(count1<=count)
    print(arr2,j-1);
  else
    print(arr1,k-1);  
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
    min_flip(arr,size);
    print(arr,size);
    return 0;
}
