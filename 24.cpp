// fibonacci
// 1 1 2 3 5 8 13 21 .....
#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, n, i, sum = 0;
    
    cin >> n;
    for (i = 1; i <= n - 2; i++)
    { 
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << b;
}