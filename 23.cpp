// factorial
#include <iostream>
using namespace std;
int main()
{
    int n, i, product = 1;
    cout << "Enter the no. : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        product *= i;
    }
    cout << "The value of factorial is : " << product;
}