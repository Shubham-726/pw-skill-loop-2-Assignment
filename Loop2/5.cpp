#include <iostream>
using namespace std;
int main()
{
    int n;
    int lastdigit = 0;
    int sum = 0;

    cout << "enter number";
    cin >> n;

    while (n != 0)
    {
        lastdigit = n % 10;
        if (lastdigit % 2 == 0)
        {
            sum = sum + lastdigit;
        }
        n /= 10;
    }
    cout << "sum of even digit of num is : " << sum;
}