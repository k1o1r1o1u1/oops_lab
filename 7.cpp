/*
Write a C++ program to create a class called COMPLEX and
implement the following overloading functions ADD that return a
COMPLEX number.
i. ADD (a, s2) – where a is an integer (real part) and s2 is a
complex number.
ii. ADD (s1, s2) – where s1 and s2 are complex numbers.
*/
#include <iostream>
using namespace std;

class COMPLEX
{
    float real, img;

public:
    COMPLEX()
    {
        real = img = 0;
    }
    COMPLEX(float r, float i)
    {
        real = r;
        img = i;
    }
    COMPLEX add(int r)
    {
        COMPLEX temp;
        temp.real = real + r;
        temp.img = img;
        return temp;
    }
    COMPLEX add(COMPLEX C)
    {
        COMPLEX temp;
        temp.real = real + C.real;
        temp.img = img + C.img;
        return temp;
    }
    void show()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{

    float r, i;
    int a;
    cout << "Enter the real and img part of C1: ";
    cin >> r >> i;
    COMPLEX C1(r, i);
    cout << "Enter the real and img part of C2: ";
    cin >> r >> i;
    COMPLEX C2(r, i);
    cout << "Enter an integer: ";
    cin >> a;
    COMPLEX result;
    result = C1.add(a);
    cout << "add(C1,a) = ";
    result.show();
    result = C1.add(C2);
    cout << "add(C1,C2) = ";
    result.show();

    return 0;
}