/*
Write a C++ program to demonstrate the concept of function overloading.
Create two functions with the same name max but with different parameter lists as
given below: max(int a, int b); max(double a, double b);
The function max(int a, int b) should compare two integer values and display the
larger integer.
The function max(double a, double b) should compare two double values and
display the larger value.
*/
#include <iostream>
using namespace std;

void max(int a, int b)
{
    int big;
    big = (a > b) ? a : b;
    cout << big << " is larger.\n";
}
void max(float a, float b)
{
    float big;
    big = (a > b) ? a : b;
    cout << big << " is larger.\n";
}

int main()
{
    int x, y;
    float p, q;

    cout << "Enter two integers: ";
    cin >> x >> y;

    max(x, y);

    cout << "Enter two floats: ";
    cin >> p >> q;

    max(p, q);

    return 0;
}