#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum;
    cout << "enter any num";
    cin >> n;
    int a = 1;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}