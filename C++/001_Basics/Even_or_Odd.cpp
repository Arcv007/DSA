// Check wheather the number is even or odd
#include<iostream>
using namespace std;

int main()
{
int a,i;
for(i=1;i<=5;i++)
{
    cout<<"enter the number:";
    cin>>a;
    if(a%2==0)
    {
        cout<<"number is even\n";
    }
    else
    {
        cout<<"Number is Odd\n";
    }
}    
return 0;

}