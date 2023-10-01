#include<iostream>
using namespace std;
void addition(int, int);
void subtraction(int a, int b){
	int sub = a - b;
	cout<<sub<<endl;
}
int main(){
	int num1, num2;
	cout<<"Enter Numbers : "<<endl;
	cin>>num1>>num2;
	cout<<"Addition is: ";
	addition(num1,num2);
	cout<<endl;
	cout<<"Subtraction is: ";
	subtraction(num1,num2);
	cout<<endl;
}
void addition(int a, int b){
	int sum = a + b;
	cout<<sum<<endl;
}
