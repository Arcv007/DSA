/* write a program to print the a float number. If it has some decimal value the print 2 decimal place
otherwise print without decimal number */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float num;
    cout<<"Enter the number: ";
    cin>>num;
    int decimalPlaces = 2;

    if (abs(num - int(num)) >= 0.00001) {
        cout << fixed << setprecision(decimalPlaces) << num << endl;
    } else {
        cout << int(num) << endl;
    }

    return 0;
}
// here fixed function is used to print the maximum precise decimal place of num variable
// here setprecision function is for setting of the decimal value upto 2
// decimalplace variable for the selection of how much decimal place you want the output
// The <iomanip> library is used for the inbuilt function which is fixed() and setprecision() 
// you can also use SETW(10) and SETFILL('0') function for filling and extending the width of number
// eg cout<<setw(10)<<setfill('0')<<num=12;
//              output:    0000000012