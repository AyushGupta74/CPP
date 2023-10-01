#include<iostream>
#include<string.h>
using namespace std;
class string1{
	int len;
	char *ptr;
	public:
		string1(char, int);
		string1(char []);      // char * = char[]
		string1(int);
		string1();
		void show();
};

string1::string1(char ch, int len){
	int i;
	this->len= len;
	ptr= new char[this->len +1];
	for(i=0;i<this->len;i++){
		ptr[i]= ch;
		cout<<ptr[i];
	}
	ptr[i]='\0';
	cout<<endl;
}

string1::string1(char* ptr1){
	len= strlen(ptr1);
	this->len= len;
	ptr= new char[this->len+ 1];
	strcpy(ptr, ptr1);
	cout<<endl;
}

string1::string1(int len){
	this->len= len;
	ptr= new char[this->len+ 1];
	char ch[this->len+ 1];
	cout<<"Enter string: ";
	cin>>ch;
	strcpy(ptr,ch);
	cout<<endl;
}

string1::string1(){
	int len;
	cout<<"Enter length: ";
	cin>>len;
	this->len=len;
	char ch[len+ 1];
	ptr= new char[this->len+ 1];
	cout<<"Enter string: ";
	cin>>ch;
	strcpy(ptr,ch);
}

void string1::show(){
	cout<<"String is: "<<ptr<<endl;
	cout<<"Length is: "<<len<<endl;
}

int main(){
	string1 s1('*',10);
	string1 s2("CDAC");
	s2.show();
	string1 s3(10);
	s3.show();
	string1 s4;
	s4.show();
	return 0;
}
