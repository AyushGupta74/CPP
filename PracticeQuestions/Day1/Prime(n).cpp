#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter number for checking of prime: ";
    cin>>n;
    bool flag=0;
    for (int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
            cout<<"prime"<<endl;
        }
    else{
        cout<<"not prime"<<endl;
        }
}