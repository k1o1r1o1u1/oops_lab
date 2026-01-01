/*
Create a class named Shape with a function that prints "This is a shape".
Create another class named Polygon inheriting the Shape class with the
same function that prints "Polygon is a shape". Create two other classes
named Rectangle and Triangle having the same function which prints
"Rectangle is a polygon" and "Triangle is a polygon" respectively.
Again, make another class named Square having the same function
which prints "Square is a rectangle". Now, try calling the function by
the object of each of these classes. Write a C++ program to demonstrate
the same.
*/

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void display()
    {
        cout << "This is a shape" << endl;
    }
};
class Polygon : public Shape
{
public:
    void display()
    {
        cout << "Polygon is a Shape.\n";
    }
};
class Rectangle : public Polygon
{
public:
    void display()
    {
        cout << "Rectangle is a Polygon.\n";
    }
};
class Triangle : public Polygon
{
public:
    void display()
    {
        cout << "Triangle is a Polygon.\n";
    }
};
class Square : public Rectangle
{
public:
    void display()
    {
        cout << "Square is a Rectangle.\n";
    }
};

int main()
{
    Shape s, *ptr;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square sq;

    ptr = &s;
    ptr->display();

    ptr = &p;
    ptr->display();

    ptr = &r;
    ptr->display();

    ptr = &t;
    ptr->display();

    ptr = &sq;
    ptr->display();
}

/*
OUTPUT:
when virtual is not present in Shape class:

This is a shape
This is a shape
This is a shape
This is a shape
This is a shape
-----------------------------------------------------------
when virtual is present in Shape class:

This is a shape
Polygon is a Shape.
Rectangle is a Polygon.
Triangle is a Polygon.
Square is a Rectangle.
*/