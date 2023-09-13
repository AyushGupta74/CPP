#include<iostream>
using namespace std;
int main(){
	int q,w,e,r,t;
	cout<<"Enter 5 marks "<<endl;
	cin>>q>>w>>e>>r>>t;
	int sum = q+w+e+r+t;
	float avg = (float)sum/5;
	cout<<"Sum"<<sum<<"	"<<"Average "<<avg<<endl;
}
