//number square
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter no. of rows : ";
    cin>>a;
    int b;
    cout<<"Enter no. of columns : ";
    cin>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<j;
        }
        cout<<endl;
    }
}