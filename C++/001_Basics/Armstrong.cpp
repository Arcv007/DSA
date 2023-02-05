/* write a program to check weather the given number is armstrong number or not
1 is a armstrong number because 1^3=1
153 is also a armstrong number because 153^3=153
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,num1,num2,arm=0;
    cout<<" enter the number to check weathe the number is a armstrong number or not"<<endl;
    cin>>n;
    num1=num2=n;
    int len = to_string(abs(num1)).length(); // here first we converted the NUM int into string then applied functin length()
    for(int i=1;i<=len;i++)
    {
        int digit=num2%10;
        arm= arm+pow(digit,len);
        num2=num2/10;
    }
    cout<<arm<<"  ";
    if (arm==n)
        cout<<"Armstrong Number"<<endl;
    else
        cout<<"Not Armstrong Number"<<endl;
    return 0;    
}