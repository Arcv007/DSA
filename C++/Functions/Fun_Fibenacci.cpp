#include<bits/stdc++.h>
using namespace std; 

void fib (int x)
{
   int t1=0;
   int t2=1;
   int next;
   for(int i=0;i<x;i++)
   {
    cout<<t1<<" ";
    next=t1+t2;
    t1=t2;
    t2=next;
   }
   return;
}

int main()
{
    int n;
    cout<<"enter the limit"<<endl;
    cin>>n;
    fib(n); 
    return 0;
}


