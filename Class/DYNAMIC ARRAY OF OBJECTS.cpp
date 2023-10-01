#include<iostream>
using namespace std;
class Complex{
	int real,img;
	public:
		void get(){
			cout<<"Enter real and imaginary number: "<<endl;
			cin>>real>>img;
		}
		void put(){
			cout<<"Complex number is: "<<real<<"+"<<img<<"i"<<endl;
		}
};

int main(){
	int n,i;
	cout<<"Enter number of objects: "<<endl;
	cin>>n;
	Complex* ptr= new Complex[n+1];
	for(i=0;i<n;i++){
		ptr[i].get();
	}
	for(i=0;i<n;i++){
		ptr[i].put();
	}
	delete[]ptr;
}
