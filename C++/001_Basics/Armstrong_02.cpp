//write a program to print the armstrong numbers upto the given number
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    for(int i=1; i<=n;i++)
    {
        int num=i;
        int len=to_string(num).length();
        int arm=0;
        while(num>0)
        {
            int digit=num%10;
            arm = arm + pow(digit,len);
            num=num/10;
        }
        if (arm==i)
         cout<<arm<<" ";
    }
}