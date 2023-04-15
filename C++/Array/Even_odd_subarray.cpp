// Write a program to find the sum maximum odd even sequence in an arrar
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


void sequence(int arr[], int n)
{   
    int res=1;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if((((arr[i]%2)==0)&&((arr[i-1]%2)!=0))||(((arr[i-1]%2)==0)&&((arr[i]%2)!=0)))
        {
            count++;
            res=max(res,count);  
        }    
        else
            count=1;

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
    sequence(arr,size);
    return 0;
}
