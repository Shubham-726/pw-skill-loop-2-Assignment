#include <iostream>
using namespace std;
int main()
{
    int n;
    int lastdigit;
    int rev = 0;
    cout << "enter number";
    cin >> n;
    int a = n;

    while (a != 0)
    {
        lastdigit = a % 10;
        rev = (rev * 10) + lastdigit;
        a /= 10;
    }

    cout << "sum of num " << n << " and its reverse " << rev << " is " << n + rev;
}