//star triangle
#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter the number : ";
    cin>>a;
    for(i=1;i<=a;i++){
        
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}