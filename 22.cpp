//1-2+3-4+5-6
#include<iostream>
using namespace std;
int main(){
    int n,i,sum1=0,sum2=0,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    //my
    for(i=1;i<=n;i+=2){
        sum1+=i;
    }
    for(i=2;i<=n;i+=2){
        sum2-=i;
    }
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    cout<<sum1+sum2<<endl;
    // sir
    for(i=1;i<=n;i++){
        if(i%2==0) sum-=i;
        else sum+=i;
    }
    cout<<sum;
}