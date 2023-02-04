// Write a program to swap two variables
#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  cout<<"ENTER TWO NUMBERS\n";
  cin>>a>>b;
  cout<<"\nYOU ENTERED THE VALUE OF a IS:"<<a ;
  cout<<"\nYOU ENTERED THE VALUE OF b IS:"<<b ;
  c=a;
  a=b;
  b=c;
  cout<<"\nTHE SWAP VALUE OF a IS:"<<a ;
  cout<<"\nTHE SWAP VALUE OF b IS:"<<b ;
  return 0;
}