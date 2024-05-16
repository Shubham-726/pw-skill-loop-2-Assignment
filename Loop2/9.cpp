#include <iostream>
using namespace std;
int cube(int n)
{
    return n * n * n;
}
int main()
{

    for (int i = 100; i <= 500; i++)
    {
        int lastdigit = 0;
        int num = 0;
        int sum = 0;
        int x = i;
        while (x != 0)
        {
            lastdigit = x % 10;
            num = cube(lastdigit);
            sum = sum + num;
            x = x / 10;
        }
        if (sum == i)
        {
            cout << i << " is " << " armstrong num" << endl;
        }
    }
}