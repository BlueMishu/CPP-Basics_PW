#include<iostream>
using namespace std;
int main(){
    int n,a,i;
    cout<<"Enter the number n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2!=0) a=1;
        else a=65;
        
        for(int j=1;j<=i;j++){
            if(i%2!=0) cout<<a;
            else cout<<(char)a;
            a+=1;
        }
        cout<<endl;
    }
}
