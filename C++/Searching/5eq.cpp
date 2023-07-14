#include<iostream>
#include<vector>
using namespace std;
void binary(int n)
{
    vector<int> arr(32);
    int i=0;
    while(n>0)
    {
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
    cout<<endl;
}
int main()
{
    int num=5;
    for(int i=0;i<10;i++)
    {
        binary(num);
        num+=5;
    }    
    return 0;
}
