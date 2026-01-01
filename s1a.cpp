/*Define a Sphere class with data members to store the radius, volume, and surface
area.Write a C++ program to read the radius for three spheres and print their volume
and surface area.*/

#include <iostream>
using namespace std;
const float PI = 3.141;
class Sphere
{
    float radius, volume, area;

public:
    void getData()
    {
        cout << "Enter the radius: ";
        cin >> radius;
    }
    void calculate()
    {
        volume = (4 / 3) * PI * radius * radius * radius;
        area = 4 * PI * radius * radius;
    }
    void display()
    {
        calculate();
        cout << "Volume = " << volume << " unit cube" << endl;
        cout << "Surface Area = " << area << " unit sq." << endl;
    }
};

int main()
{
    Sphere s[3];
    cout << "Enter the radius of three Spheres: \n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nSphere " << i + 1 << endl;
        s[i].getData();
    }
    cout << "\n----------Sphere Details-----------\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nSphere " << i + 1 << endl;
        s[i].display();
    }

    return 0;
}