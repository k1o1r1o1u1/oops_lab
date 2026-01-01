/*
Define a STUDENT class with USN, Name, and Marks in 3 tests of a
subject. Declare an array of 10 STUDENT objects. Using appropriate
functions, find the average of two better marks for each student. Print
the USN, Name, and the average marks of all the students
*/
#include <iostream>
using namespace std;

class STUDENT
{
    string USN, Name;
    int marks[3], avg;

public:
    void getData();
    void calc();
    void display();
};

void STUDENT::getData()
{
    cout << "Enter USN: ";
    cin >> USN;
    cout << "Enter Name: ";
    cin >> Name;
    cout << "Enter marks in 3 subjects: ";
    cin >> marks[0] >> marks[1] >> marks[2];
}
void STUDENT::calc()
{
    int small, total = marks[0] + marks[1] + marks[2];
    small = (marks[0] < marks[1]) ? (marks[0] < marks[2] ? marks[0] : marks[2]) : (marks[1] < marks[2] ? marks[1] : marks[2]);
    avg = (total - small) / 2;
}
void STUDENT::display()
{
    calc();
    cout << "Name: " << Name << endl;
    cout << "USN: " << USN << endl;
    cout << "Average in best two marks = " << avg << endl;
}

int main()
{
    STUDENT s[10];
    cout << "Enter details of 10 students: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Student " << i + 1 << endl;
        s[i].getData();
    }
    cout << "\n----------Students Details-----------\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].display();
    }
    return 0;
}