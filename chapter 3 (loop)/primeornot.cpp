#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Value : ";
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n == 1)
        cout << "1 is not a prime No.";
    else if (flag == true)
        cout << "prime NO.";
    else
        cout << "not a prime no.";
}