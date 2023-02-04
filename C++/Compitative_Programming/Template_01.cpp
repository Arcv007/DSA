#include<iostream>
using namespace std;

template<class T>

class data
{
    public:
    data(T x)
    {
        cout<<sizeof(x);
    }
};

int main()
{
    data <int> a(5);
    data <float> b(10.4);
    data <char> c('b');
    return 0;
}