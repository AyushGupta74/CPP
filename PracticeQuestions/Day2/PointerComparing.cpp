#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int *b= &arr[4];
    int *c= (arr+4);
    if(*b == *c){
        cout<<"B & C are pointing on same values."<<endl;
    }
    if((arr+4) == b){
        cout<<"A & B are in same address."<<endl;
    }
    if(b == c){
        cout<<"B & C are in same address."<<endl;
    }
}