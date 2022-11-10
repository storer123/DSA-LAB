#include <iostream>
using namespace std;
// Write a program in C++ to exchange the content of two variables by overloading the user defined functions

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void swap(float *x, float *y)
{
    float temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    cout << "Enter the values of a & b in int " << endl;
    cin >> a >> b;
    cout << "Before Swapping" << endl;
    cout << "a\tb" << endl;
    cout << a << "\t" << b << endl;
    swap(&a, &b);
    cout << "After Swapping" << endl;
    cout << "a\tb" << endl;
    cout << a << "\t" << b << endl;
    float c, d;
    cout << "Enter the values of c & d in float " << endl;
    cin >> c >> d;
    cout << "Before Swapping" << endl;
    cout << "c\td" << endl;
    cout << c << "\t" << d << endl;
    swap(&c, &d);
    cout << "After Swapping" << endl;
    cout << "c\td" << endl;
    cout << c << "\t" << d;

    return 0;
}
