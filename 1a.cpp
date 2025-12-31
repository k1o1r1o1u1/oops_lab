// Write a C++ program to find and output all the roots of a quadratic equation
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, D;
    float root1, root2;
    cout << "Enter the coefficients(a,b,c): ";
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        cout << "The roots are unique and unequal." << endl;
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        cout << "The roots are: " << root1 << " and " << root2 << endl;
    }
    else if (D == 0)
    {
        cout << "The roots are unique and equal." << endl;
        root1 = root2 = (-b) / (2 * a);
        cout << "The root is: " << root1 << endl;
    }
    else
    {
        cout << "The roots are complex.\n";
        float realPart = -b / (2 * a);
        float imgPart = sqrt(-D) / (2 * a);
        cout << "The roots are: " << realPart << " + i" << imgPart << " and " << realPart << " + i" << imgPart << endl;
    }
    return 0;
}