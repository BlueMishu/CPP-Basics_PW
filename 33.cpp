//Alphabet square
#include<iostream>
using namespace std;
int main(){
    int i,j;
    char n;
    cout<<"Enter an alphabet : ";
    cin>>n;
    int a=(int)n;
    for(i=65;i<=a;i++){

        for(j=65;j<=i;j++){
            cout<<(char)j;
        }
        cout<<endl;
    }
}