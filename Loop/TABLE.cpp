#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout<<"Enter number "<<endl;
	cin>>n;
	cout<<"Table is "<<endl;
	
	while(i<=10){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i++;
	}
}
