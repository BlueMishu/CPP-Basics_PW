// Axis
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the coordinates : ";
    cin>>a>>b;
    if(a==0 && b==0) cout<<"At Origin";
    else if(a==0) cout<<"Y-axis";
    else if(b==0) cout<<"X-axis";
    
    else cout<<" ";
    
}