#include<iostream>
using namespace std;
int main()
{
    int a,b,c ;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"The greatest number is : "<<a; 
        }
        else
        {
            cout<<"The greatest number is : "<<c; 
        }
    }
    if(c>b)
    {
        if(b>a)
        {
            cout<<"The greatest number is : "<<c;
        }
    }
    if(b>a)
    {
        if(a>c)
        {
            cout<<"The greatest number is : "<<b;
        }
    }
    if(b>c)
    {
        if(b>a)
        {
            cout<<"The greatest number is : "<<b;
        } 
    }
}