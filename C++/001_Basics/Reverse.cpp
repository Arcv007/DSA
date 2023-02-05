// write a program to print the reverse of a given number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,digit,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    int num=n;
    while(num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    cout<<"The reverse of the number is "<<rev<<endl;
    return 0;
}