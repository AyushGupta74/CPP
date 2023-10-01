//SUM OF 5 MARKS OF A STUDENT USING MALLOC

#include<iostream>
using namespace std;
int main(){
	int num,i,sum=0;
	int* ptr;
	cout<<"Enter number of elements: "<<endl;
	cin>>num;
	ptr= new int[num];
	cout<<"Enter marks: "<<endl;
	for(i=0;i<num;i++){
		cin>>ptr[i];
	}
	for(i=0;i<num;i++){
		sum+=ptr[i];
	}
	cout<<"Sum is: "<<sum<<endl;
	delete []ptr;
}
