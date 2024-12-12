#include <iostream>
using namespace std;
int main()
{
    int a, b ,x;
    char c;
    cout << "Enter 2 no : ";
    cin >> a >> b;
    // cout<<"Enter the operator : ";
    cin >>x;
    switch (x)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        cout << a / b;
        break;
    }
}