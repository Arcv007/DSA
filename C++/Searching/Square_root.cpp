// Write a function that takes a number and return square root of that number in integer
#include<iostream>
#include<cmath>
using namespace std;

int square(int n)
{
    int i = 1;
    while(i*i<=n)
    {
        i++;
    }
    return i-1;
}

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<square(num);
    return 0;
}
