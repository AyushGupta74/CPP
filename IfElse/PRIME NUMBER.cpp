#include<iostream>
using namespace std;
int main(){
	int i,n;
	cout<<"Enter number: "<<endl;
	cin>>n;
	for(i=2;i<n;i++){
		if(n%i==0){
			break;
		}
	}
	if(i==n){
		cout<<"Number is prime"<<endl;
	}
	else{
		cout<<"Number is not prime"<<endl;
	}
	return 0;
}
