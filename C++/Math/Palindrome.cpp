// write a program to check weather the number is palindrome or not

#include<bits/stdc++.h>
using namespace std; 

// Recursive method to reverse a number
int reverse(int n, int rev )
{
    int digit=0;
    digit=n%10;
    if (n==0)
        return rev;
    reverse(n/10,rev*10+digit);
}

int main()
{
    int num,rev;
    for (int i=0;i<3;i++)
    {
        cout<<"\nEnter the number: ";
        cin>>num;
        rev= reverse(num,0);
        if (rev==num)
            cout<<"\nNumber is palindrome"<<endl;
        else
            cout<<"Not Palindrome";
    } 
    return 0;
}
