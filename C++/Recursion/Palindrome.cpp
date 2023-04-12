// write a program to check weather the given number is palindrome or not using recursion 
#include<bits/stdc++.h>
using namespace std; 

// Function to reverse the number
bool rev(string str,int start, int end)
{
    if(start>=end)
        return true;
    return (str[start]==str[end])&& rev(str,start+1,end-1);
}

int main()
{
    int num,end;
    string str;
    cout<<"Enter the String: ";
    cin>>str;
    end=str.length();
    if(rev(str,1,end-1))
        cout<<"Yes, It is a Palindrome";
    else
        cout<<"no, It is not a Palindrome"; ;
}
