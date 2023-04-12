// write a program to count the number of cuts given length of three cut and length of rope
#include<bits/stdc++.h>
using namespace std; 

int cut(int n,int a, int b, int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    int res=max({cut(n-a,a,b,c),cut(n-b,a,b,c),cut(n-c,a,b,c)});
    if(res==-1)
        return -1;
    return res+1;
}

int main()
{
    int len,a,b,c;
    cout<<"Enter the length of rope: ";
    cin>>len;
    
    cout<<"Enter the length of three cuts: ";
    cin>>a>>b>>c;
    cout<<cut(len,a,b,c);
    return 0;
}
