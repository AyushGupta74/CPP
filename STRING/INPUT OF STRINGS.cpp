#include<iostream>
using namespace std;
int main(){
	int i,num;
	cout<<"Enter number of characters: "<<endl;
	cin>>num;
	char* str= new char[num];
	for(i=0;i<num;i++){
		cin>>str[i];
	}
	for(i=0;i<num;i++){
		cout<<str[i];
	}
	delete[]str;
}
