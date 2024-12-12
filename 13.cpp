// Table of any no.
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the no. : ";
    cin >> n;

    // M-1

    /* for (i = 1; i <= n * 10; i++)
    {
        if (i % n == 0)
        {
            cout << i << endl;
        }
    }
    */

        // M-2

        for (i = n; i <= n * 10; i = i + n)
    {
        cout << i << endl;
    }
}