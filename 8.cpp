#include<iostream>
using namespace std;
int main()
{
    int r,cir,area;
    cout<<"Enter radius : ";
    cin>>r;
    cir = 2*3.14*r;
    area = 3.14*r*r;
    if(area>cir)
    {
        cout<<"Area is greater";
    }
    else if (cir>area)
    {
        cout<<"cir is greater";
    }
    if(area==cir)
    {
        cout<<"Both are equal";
    }
}