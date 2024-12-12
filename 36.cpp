// Binary triangle
#include <iostream>
using namespace std;
int main()
{
    int a=1, b, i, n, j;
    cout << "Enter the number : ";
    cin >> n;
//M - 1     
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
//M - 2
    for(i=1;i<=n;i++){
        if(i%2==0) a=1;
        else a=0;
        for(j=1;j<=i;j++){
            //flipping
            if(a==1) a=0;
            else a=1;
            cout<<a;
        }
        cout<<endl;
    }
}


