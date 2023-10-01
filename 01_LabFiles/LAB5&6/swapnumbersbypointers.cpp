#include<iostream>
using namespace std;

swapnos(int * a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a,b;
	cout<<"Enter value of a and b";
	cin>>a>>b;
	cout<<"the values of a and b before swapping are="<<a<<endl<<b<<endl;
	swapnos(&a,&b);
	cout<<"the values of a and b after swapping are="<<a<<endl<<b<<endl;
	
	
}
