#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    char a='*';
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}