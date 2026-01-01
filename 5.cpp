/*
Given that an EMPLOYEE class contains following members:
Data members: Employee_Number, Employee_Name, Basic, DA, IT,
Net_Salary.
Member functions: to read the data, to calculate Net_Salary and to print
data members.
Write a C++ program to read the data of N employees and compute
Net_Salary of each employee.
(Dearness Allowance (DA) = 52% of Basic and Income Tax (IT) = 30%
of the gross salary. Net_Salary = Basic + DA - IT)
*/
#include <iostream>
#include <string>
using namespace std;

class EMPLOYEE
{
    int Employee_Number;
    string Employee_Name;
    float Basic, DA, IT, Net_Salary;

public:
    void getData()
    {
        cout << "Enter Employee No.: ";
        cin >> Employee_Number;
        cout << "Enter Employee Name: ";
        cin >> Employee_Name;
        cout << "Enter Basic pay: ";
        cin >> Basic;
    }
    void calculateSalary()
    {
        DA = 0.52 * Basic;
        float gross = Basic + DA;
        IT = 0.30 * gross;
        Net_Salary = gross - IT;
    }
    void display()
    {
        calculateSalary();
        cout << "Employee Number: " << Employee_Number << endl;
        cout << "Employee Name: " << Employee_Name << endl;
        cout << "Basic Pay: " << Basic << endl;
        cout << "Dearness Allowance: " << DA << endl;
        cout << "Income Tax: " << IT << endl;
        cout << "Net salary = " << Net_Salary << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the no. of Employees: ";
    cin >> n;
    EMPLOYEE e[50];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the deltails of employee " << i + 1 << endl;
        e[i].getData();
    }
    cout << "\n--------Employee Details----------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << ": \n";
        e[i].display();
    }
    return 0;
}