/*The daily maximum temperatures recorded for 5 cities during the first 6
days of January month have to be tabulated. Write a C++ program to
read the data and find the city and day corresponding to highest
temperature and lowest temperature.*/

#include <iostream>
using namespace std;

int main()
{
    const int cities = 5;
    const int days = 6;
    int temp[cities][days];
    cout << "Enter the max temperature for 5 cities(each for 6 days): \n";
    // read the temp

    for (int i = 0; i < cities; i++)
    {
        cout << "\nCity: " << i + 1 << endl;
        for (int j = 0; j < days; j++)
        {
            cout << "Day " << j + 1 << ": ";
            cin >> temp[i][j];
        }
    }
    int maxTemp = temp[0][0];
    int minTemp = temp[0][0];
    int maxCity = 0;
    int minCity = 0;
    int maxDay = 0;
    int minDay = 0;

    // finding the max and the min
    for (int i = 0; i < cities; i++)
    {
        for (int j = 0; j < days; j++)
        {
            if (temp[i][j] > maxTemp)
            {
                maxTemp = temp[i][j];
                maxCity = i;
                maxDay = j;
            }
            if (temp[i][j] < minTemp)
            {
                minTemp = temp[i][j];
                minCity = i;
                minDay = j;
            }
        }
    }
    cout << "\n-----------------------------------------------\n";
    cout << "Highest Temperature :" << maxTemp << "C; City: " << maxCity + 1 << "; Day: " << maxDay + 1 << endl;
    cout << "\n-----------------------------------------------\n";
    cout << "Lowest Temperature :" << minTemp << "C; City: " << minCity + 1 << "; Day: " << minDay + 1 << endl;
    cout << "\n-----------------------------------------------\n";
    return 0;
}