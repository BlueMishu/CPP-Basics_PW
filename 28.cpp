// sum of given number and its reverse
#include <iostream>
using namespace std;
int main()
{
    int n, a, sum1, sum2, sum, b, r = 0;
    cout << "Enter a number : ";
    cin >> n;
    b = n;
    while (b > 0)
    {
        r *= 10;
        a = b % 10;
        r += a;
        b /= 10;
    }
    cout << n << endl;
    cout << r << endl;
    sum = n + r;
    cout << sum;
}
