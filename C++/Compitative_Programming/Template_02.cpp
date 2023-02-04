#include<iostream>
using namespace std;

template<class T1,class T2>

class data
{
    public:
    data(T1 x,T2 y)
    {
        cout<<x+y;
    }
};

int main()
{
    data <int,float> a(5,5.5);
    data <int,int> b(6,7);
    data <float,float> c(3.34,4.45);
    return 0;
}