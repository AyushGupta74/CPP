#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    if(num1>num2){
        cout<<"Number 1 is greater."<<endl;
    }
    else if(num2>num1){
        cout<<"Number 2 is greater."<<endl;
    }
    else{
        cout<<"Both are equal."<<endl;
    }
}