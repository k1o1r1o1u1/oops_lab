/*Write a C++ program to swap 2 values by writing functions for the
following:
i. Call-by-name/value
ii. Call-by-pointers and
iii. Call-by-reference
*/
#include <iostream>
using namespace std;
// i. Call by name/value
void swapByName(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    // no change in the main()
}

// ii. Call by pointers
void swapByPtr(int *ptr_a, int *ptr_b)
{
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}

// iii. Call by reference
void swapByRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "\n-----Swap by name/value-----\n";
    cout << "Enter value of x & y: ";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << "; y = " << y << endl;
    swapByName(x, y);
    cout << "After swapping: x = " << x << "; y = " << y << endl;
    cout << "\n-----Swap by pointers-----\n";
    cout << "Enter value of x & y: ";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << "; y = " << y << endl;
    swapByPtr(&x, &y);
    cout << "After swapping: x = " << x << "; y = " << y << endl;
    cout << "\n-----Swap by reference-----\n";
    cout << "Enter value of x & y: ";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << "; y = " << y << endl;
    swapByRef(x, y);
    cout << "After swapping: x = " << x << "; y = " << y << endl;

    return 0;
}
