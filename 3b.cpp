/*Define a Cube class and write a C++ program to read the side for
three cubes and print their volume and outer area.
*/
#include <iostream>
using namespace std;

class Cube
{
    int a, vol, area;

public:
    void getData()
    {
        cout << "Enter the length of side: ";
        cin >> a;
    }
    int calculateVolume()
    {
        return a * a * a;
    }
    int calculateArea()
    {
        return 6 * a * a;
    }
    void display()
    {

        cout << "Volume = " << calculateVolume() << " unit cube" << endl;
        cout << "Surface Area = " << calculateArea() << " unit sq.\n";
    }
};
int main()
{
    Cube c1;
    c1.getData();
    c1.display();
    return 0;
}