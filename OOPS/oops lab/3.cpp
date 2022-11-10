#include <iostream>
using namespace std;
// Write a program in C++ to design a calculator to perform all the arithmetic operations with data of different types by overloading 4 different user defined functions such as addition, subtraction, multiplication and division
int add(int x, int y)
{
    int r = x + y;
    return r;
}
float add(float x, float y)
{
    float r = x + y;
    return r;
}
double add(double x, double y)
{
    double r = x + y;
    return r;
}

int sub(int x, int y)
{
    int r = y - x;
    return r;
}
float sub(float x, float y)
{
    float r = y - x;
    return r;
}
double sub(double x, double y)
{
    double r = y - x;
    return r;
}

int mul(int x, int y)
{
    int r = x * y;
    return r;
}
float mul(float x, float y)
{
    float r = x * y;
    return r;
}
double mul(double x, double y)
{
    double r = x * y;
    return r;
}

int divi(int a, int b)
{
    int r = a / b;
    return r;
}
double divi(double x, double y)
{
    double r = x / y;
    return r;
}
float divi(float x, float y)
{
    float r = x / y;
    return r;
}

int main()
{
    int a1, b1;
    cout << "Enter the value of a and b in int\n";
    cin >> a1 >> b1;
    int z1 = add(a1, b1);
    cout << "The sum is " << z1 << endl;
    float c1, d1;
    cout << "Enter the value of a and b in float\n";
    cin >> c1 >> d1;
    float y1 = add(c1, d1);
    cout << "The sum is " << y1 << endl;
    double e1, f1;
    cout << "Enter the value of a and b in double\n";
    cin >> e1 >> f1;
    double x1 = add(e1, f1);
    cout << "The sum is " << x1 << endl;

    int a2, b2;
    cout << "Enter the value of a and b in int\n";
    cin >> a2 >> b2;
    int z2 = sub(a2, b2);
    cout << "The Difference is " << z2 << endl;
    float c2, d2;
    cout << "Enter the value of a and b in float\n";
    cin >> c2 >> d2;
    float y2 = sub(c2, d2);
    cout << "The Difference is " << y2 << endl;
    double e2, f2;
    cout << "Enter the value of a and b in double\n";
    cin >> e2 >> f2;
    double x2 = sub(e2, f2);
    cout << "The Difference is " << x2 << endl;

    int a3, b3;
    cout << "Enter the value of a and b in int\n";
    cin >> a3 >> b3;
    int z3 = mul(a3, b3);
    cout << "The product is " << z3 << endl;
    float c3, d3;
    cout << "Enter the value of a and b in float\n";
    cin >> c3 >> d3;
    float y3 = mul(c3, d3);
    cout << "The product is " << y3 << endl;
    double e3, f3;
    cout << "Enter the value of a and b in double\n";
    cin >> e3 >> f3;
    double x3 = mul(e3, f3);
    cout << "The product is " << x3 << endl;

    int a4, b4;
    cout << "Enter the value of a and b in int\n";
    cin >> a4 >> b4;
    int z4 = divi(a4, b4);
    cout << "The quotient is " << z4 << endl;
    float c4, d4;
    cout << "Enter the value of a and b in float\n";
    cin >> c4 >> d4;
    float y4 = divi(c4, d4);
    cout << "The quotient is " << y4 << endl;
    double e4, f4;
    cout << "Enter the value of a and b in double\n";
    cin >> e4 >> f4;
    double x4 = divi(e4, f4);
    cout << "The quotient is " << x4 << endl;

    return 0;
}
