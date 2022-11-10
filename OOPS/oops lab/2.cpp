#include <iostream>
using namespace std;
// Write a program in C++ to find the area of triangle by overloading the area function and take base arguments as default arguments
int area(int a, int b = 10)
{
    int x;
    x = (a * b) / 2;
    return x;
}
float area(float a, float b = 3.0)
{
    float x;
    x = (a * b) / 2;
    return x;
}
double area(double a, double b = 2.3)
{
    double x;
    x = (a * b) / 2;
    return x;
}

int main()
{
    int h;
    cout << "Enter the value of height in int " << endl;
    cin >> h;
    int ar;
    ar = area(h);
    cout << "The area of triangle in int is " << ar << endl;
    float c;
    cout << "Enter the value of height in float " << endl;
    cin >> c;
    float arr;
    arr = area(c);
    cout << "The area of triangle in float is " << arr << endl;
    double e;
    cout << "Enter the value of height in double " << endl;
    cin >> e;
    double arrr;
    arrr = area(e);
    cout << "The area of triangle in double is " << arrr;
    return 0;
}
