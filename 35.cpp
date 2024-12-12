//different NUMBER TRIANGLE/floyd's triangle
#include <iostream>
using namespace std;
int main()
{
    int a=1,b, i, n, j;
    cout << "Enter the number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        
        for (j = 1; j <= i; j++)
        {

            cout << a<<" ";
            a+=1;
        }

        cout << endl;
    }
}