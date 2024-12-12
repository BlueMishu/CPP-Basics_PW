#include<iostream>
using namespace std;
int main()
{
    int l1,l2,l3;
    cout<<"Enter length of first side : ";
    cin>>l1;    
    cout<<"Enter length of second side : ";
    cin>>l2;
    cout<<"Enter length of third side : ";
    cin>>l3;
    if(l1 == l2 && l2 == l3)
    {
        cout<<"Equilateral triangle";
    }
    else if(l1==l2 || l1==l3 || l2==l3)
    {
        cout<<"Isosceles triangle";
    }
    else{
        cout<<"scalene triangle";

    }
    return 0;

}