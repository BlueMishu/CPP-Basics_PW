//star triangle reverse
#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter the number : ";
    cin>>a;
    //my code
    for(i=1;i<=a;i++){
        
        for(j=a;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    //sir code
    for(i=1;i<=a;i++){
        
        for(j=1;j<=a+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
