//1+2+3+4+5..
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter a number n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
}