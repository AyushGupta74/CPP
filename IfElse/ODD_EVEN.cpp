#include<iostream>
using namespace std;
int main(){
	int odd=0, even=0,i;
	for(i=1;i<20;i++){
		if(i%2==0){
			even+=i;
		}
		else{
			odd+=i;
		}
	}
	cout<<"Addition of even numbers: "<<even<<endl;
	cout<<"Addition of odd numbers: "<<odd<<endl;
}
