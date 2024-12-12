//sum of even number in a number
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,a ;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        a=n%10;
        if(a%2==0){
            sum+=a;
        }
        else{
            sum=sum;
        }
        n=n/10;
    }
    cout<<"Sum of even number in a given number is : "<<sum;
}