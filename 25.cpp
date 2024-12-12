//a raise to the power b
#include<iostream>
using namespace std;
int main(){
    int a,b,i,ans = 1;
    cout<<"Enter two no. : ";
    cin>>a>>b;
    for(i=1;i<=b;i++){
        ans*=a;
        
    }
    cout<<ans;
}