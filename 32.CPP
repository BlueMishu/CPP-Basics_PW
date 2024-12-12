// ODD NUMBER TRIANGLE
#include <iostream>
using namespace std;
int main()
{
    int b, i, n, j;
    cout << "Enter the number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        int a = 1;
        for (j = 1; j <= i; j++)
        {

            cout << a;
            a += 2;
        }

        cout << endl;
    }
}