#include<iostream>
using namespace std;
int main(){
	int i,n,s,sum=0;
	float avg;
	cout<<"Enter number of subjects: ";
	cin>>n;
	cout<<"Enter marks: "<<endl;
	for(i=0;i<n;i++){
		cin>>s;
		sum=sum+s;
	}
	avg=(float)sum/n;
	cout<<"Average is: "<<avg<<endl;
}
