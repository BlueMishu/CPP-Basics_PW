//Reverse of a number
#include<iostream>
using namespace std;
int main(){
    int a,n,r=0,s,ans=1;
    cin>>n;
    s=n;
    while(s>0){
        if(s%10==0){
        r++;
        s/=10;
        }
        else break;
        
    }
    for(int i=1;i<=r;i++){
        ans*=10;
        
    }
    n=n/(ans);
    while(n>0){
        
        a=n%10;
        n/=10;
        cout<<a;
    }
}    