#include <iostream>
using namespace std;
// Write a program in C++ to design a calculator to perform all the arithmetic operations with data of different types by overloading 4 different user defined functions such as addition, subtraction, multiplication and division with one value as default argument
int add(int x, int y = 10)
{
    int r = x + y;
    return r;
}
float add(float x, float y = 2.4)
{
    float r = x + y;
    return r;
}
double add(double x, double y = 3.4)
{
    double r = x + y;
    return r;
}

int sub(int x, int y = 3)
{
    int r = y - x;
    return r;
}
float sub(float x, float y = 3.5)
{
    float r = y - x;
    return r;
}
double sub(double x, double y = 4.3)
{
    double r = y - x;
    return r;
}

int mul(int x, int y = 3)
{
    int r = x * y;
    return r;
}
float mul(float x, float y = 6.2)
{
    float r = x * y;
    return r;
}
double mul(double x, double y = 5.1)
{
    double r = x * y;
    return r;
}

int divi(int a, int b = 2)
{
    int r = a / b;
    return r;
}
float divi(float x, float y = 2.2)
{
    float r = x / y;
    return r;
}
double divi(double x, double y = 3.4)
{
    double r = x / y;
    return r;
}

int main()
{
    int a1;
    cout << "Enter the value of a in int\n";
    cin >> a1;
    int z1 = add(a1);
    cout << "The sum is " << z1 << endl;
    float c1;
    cout << "Enter the value of a in float\n";
    cin >> c1;
    float y1 = add(c1);
    cout << "The sum is " << y1 << endl;
    double e1;
    cout << "Enter the value of a in double\n";
    cin >> e1;
    double x1 = add(e1);
    cout << "The sum is " << x1 << endl;

    int a2;
    cout << "Enter the value of a in int\n";
    cin >> a2;
    int z2 = sub(a2);
    cout << "The Difference is " << z2 << endl;
    float c2;
    cout << "Enter the value of a in float\n";
    cin >> c2;
    float y2 = sub(c2);
    cout << "The Difference is " << y2 << endl;
    double e2;
    cout << "Enter the value of a in double\n";
    cin >> e2;
    double x2 = sub(e2);
    cout << "The Difference is " << x2 << endl;

    int a3;
    cout << "Enter the value of a in int\n";
    cin >> a3;
    int z3 = mul(a3);
    cout << "The product is " << z3 << endl;
    float c3;
    cout << "Enter the value of a in float\n";
    cin >> c3;
    float y3 = mul(c3);
    cout << "The product is " << y3 << endl;
    double e3;
    cout << "Enter the value of a in double\n";
    cin >> e3;
    double x3 = mul(e3);
    cout << "The product is " << x3 << endl;

    int a4, b4;
    cout << "Enter the value of a in int\n";
    cin >> a4;
    int z4 = divi(a4);
    cout << "The remainder is " << z4 << endl;
    float c4;
    cout << "Enter the value of a in float\n";
    cin >> c4;
    float y4 = divi(c4);
    cout << "The remainder is " << y4 << endl;
    double e4;
    cout << "Enter the value of a in double\n";
    cin >> e4;
    double x4 = divi(e4);
    cout << "The remainder is " << x4 << endl;

    return 0;
}
