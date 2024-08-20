#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st No. ";
    cin >> a;
    cout << "Enter 2nd No. ";
    cin >> b;
    cout << "Enter 3rd No. ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << " is a greatest of them";
    }
    else if (b > a && b > c)
    {
        cout << b << " is a greatest of them";
    }
    else
    {
        cout << c << " is a greatest of them";
    }
}