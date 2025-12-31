// Write a C++ program to sort the elements in ascending and descending order.
#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cout << "Enter the nmber of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // sorting in ascending order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\n Ascending Order: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;

    // sorting in decending order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\n Decending Order: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
    return 0;
}
