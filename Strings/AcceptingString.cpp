#include<iostream>
using namespace std;
int main(){
	int ch;
	cout<<"Enter number of character: "<<endl;
	cin>>ch;
	char* str=new char[10];
	cout<<"Enter string: "<<endl;
	cin>>str;
	cout<<"String is: "<<str<<endl;
	delete[]str;
}
