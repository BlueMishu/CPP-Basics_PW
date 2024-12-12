// Printing of gp
#include <iostream>
using namespace std;
int main()
{
    int n, a = 1, i;
    cout << "Enter a no. : ";
    cin >> n;
    //M-1
    //more useful
    for (i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * 2;
    }
    //M2
    // use the formula to find h last term of gp and writing it in second part of for
}