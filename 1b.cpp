// Write a C++ program to find the sum of all the natural numbers from 1 to n.
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a positive number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += i;
    // or u can use the formula  sum = n*(n+1)/2
    cout << "Sum of natural numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}