// factorial 
#include<iostream>
using namespace std;
int main(){
    int n,i,a=1;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        a*=i;
        cout<<a<<endl;
    }
    
}