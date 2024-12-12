// sum of digits
#include <iostream>
using namespace std;
int main()
{
    int n, a, sum;
    cout << "Enter a number : ";
    cin >> n;
    sum = 0;
    while (n > 0)
    {
        a = n % 10;
        n /= 10;
        sum += a;
    }
    cout << sum;
}