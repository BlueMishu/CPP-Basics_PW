// Note calculating
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the amount : ";
    cin>>n;
    if(n%2000!=0){
        cout<<n/2000<<" notes are of 2000";
    }
    int a=n%2000;
    if(a%500!=0){
        cout<<","<<a/500<<" notes are there of 500";
    }
    int b=a%500;
    if(b%100!=0){
        cout<<","<<b/100<<" notes are of 100";
    }
    int c=b%100;
    if(c%10==0){
        cout<<","<<c/10<<" notes are of 10";
    }
}