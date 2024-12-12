#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n%5==0)
    {
        if(n%3==0)
        {
            cout<<"Correct";
        }
        else
        {
            cout<<"not matching condtions";
        }
    }
    else
    {
        cout<<"not matching conditions";
    }
    
}