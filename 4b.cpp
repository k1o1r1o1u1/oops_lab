/*
Write a C++ program to demonstrate function overloading for the
following prototypes.
sum_two_nums(int a, int b);
sum_two_nums(double a, double b);
*/
#include <iostream>
using namespace std;

int sum_two_nums(int a, int b)
{
    return a + b;
}
float sum_two_nums(float a, float b)
{
    return a + b;
}

int main()
{
    int x, y, z;
    float p, q, r;
    cout << "Enter two integers: ";
    cin >> x >> y;
    z = sum_two_nums(x, y);
    cout << "Sum of two integers: " << z << endl;
    cout << "Enter two float: ";
    cin >> p >> q;
    r = sum_two_nums(p, q);
    cout << "Sum of two floats = " << r << endl;
    return 0;
}