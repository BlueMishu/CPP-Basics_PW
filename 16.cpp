//100,97,94,....,n
//can also be solved by formule(an=a+(n-1)d)
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=100;i>=n;i-=3){
        cout<<i<<endl;
    }
}