#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the three numbers:";
    cin>>a>>b>>c;
    if((a==b)&&(b==c))
    {
        cout<<"All Numbers are equal";
    }
    else if(a>b)
    {
        if(a>c)
        {
            cout<<"A is the greatest";
        }
        else
          cout<<"C is the greatest";
    }
    else 
    {
        if (b>c)
        {
            cout<<"B is the greatest";
        }
        else
        {
            cout<<"C is the greatest";
        }    
    }        
    return 0;        
}