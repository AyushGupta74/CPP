#include<iostream>
using namespace std;

int division(int x, int y){
	if(y==0){
		throw "Attempted to divide by 0";
	}
	return (x/y);
}

int main(){
	int dividend,divisor;
	float result;
	try{
		cout<<"Enter dividend: ";
		cin>>dividend;
		cout<<"Enter divisor: ";
		cin>>divisor;
		result=division(dividend,divisor);
		cout<<result;
		}
	catch(const char *e)
	{
		cout<<e<<endl;
	}
	return 0;
}
