#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0,m;
	float avg;
	char str;
	cout<<"Enter number of characters: "<<endl;
	cin>>n;
	cout<<"Enter number of subjects: "<<endl;
	cin>>m;
	int* marks= new int[m];
	cout<<"Enter marks: "<<endl;
	for(i=0;i<m;i++){
		cin>>marks[i];
		sum+=marks[i];
	}
	char* name= new char[n];
	cout<<"Enter name: "<<endl;
	cin>>name;
	cout<<"Name is: "<<name<<endl;
	avg=sum/m;
	cout<<"Average is: "<<avg<<endl;
	delete[]marks;
	delete[]name;
	
}
