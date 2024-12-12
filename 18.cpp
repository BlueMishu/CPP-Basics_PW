#include<iostream>
using namespace std;
int main(){
    int n,i,count=0,a;
    cout<<"Enter a number : ";
    cin>>n;
    int b=n;
    /* My method
    while(n>0){
        a=n/10;
        n=a;
        count=count+1;
        
    }
    if(b==0){
        cout<<1;
    }
    else(cout<<count);
    */
    while(n>0){
        n/=10;
        count+=1;
    }
    if(b==0){
        cout<<1;
    }
    else(cout<<count);
}