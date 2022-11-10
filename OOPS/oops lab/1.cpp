#include <iostream>
using namespace std;
//Write a program in C++ to overload a function area, to calculate the area of triangle with different types of values
int area(int a, int b)
{
    int x;
    x = (a * b) / 2;
    return x;
}
float area(float a, float b)
{
    float x;
    x = (a * b) / 2;
    return x;
}
double area(double a, double b)
{
    double x;
    x = (a * b) / 2;
    return x;
}

int main()
{
    int b, h;
    cout << "Enter the value of base and height in int\n";
    cin >> b >> h;
    int ar;
    ar = area(b, h);
    cout << "The area of triangle in int is " << ar << endl;
    float c, d;
    float arr;
    cout << "Enter the value of base and height in float\n";
    cin >> c >> d;
    arr = area(c, d);
    cout << "The area of triangle in float is " << arr << endl;
    double e, f;
    double arrr;
    cout << "Enter the value of base and height in double\n";
    cin >> e >> f;
    arrr = area(e, f);
    cout << "The area of triangle in double is " << arrr;

    return 0;
}
