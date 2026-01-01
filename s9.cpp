/*
Write a C++ program to demonstrate operator overloading by overloading the ‘+’
operator for a Complex class. The class should store the real and imaginary parts of
a complex number. Overload the + operator so that the addition of two complex
number objects can be performed using the statement:
C1=C2+C3
Create objects c1, c2, and c3, perform the addition using the overloaded operator,
and display the result.
*/

#include <iostream>
using namespace std;

class Complex
{
    float real, img;

public:
    Complex()
    {
        real = img = 0;
    }
    Complex(float r, float i)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.img = img + c2.img;
        return temp;
    }
    void show()
    {
        cout << real << " + " << img << "i\n";
    }
};

int main()
{
    Complex c1(2, 3), c2(5, 6), c3;
    c3 = c1 + c2; // c3 = c1.operator+(c2);
    c1.show();
    c2.show();
    cout << "-------\n";
    c3.show();
    return 0;
}
