#include<iostream>
using namespace std;
void square(int);
int main(){
	int a;
	cout<<"Enter the number "<<endl;
    cin>>a;
	square(a);
	return 0;
}  
void square(int x){
	int w= x*x;
	cout<<"Square is "<<w <<endl;
}
