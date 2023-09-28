#include<iostream>
using namespace std;
class demo{
	public:
		int a;
		demo(){
			a=5;
		}
		int add(int x){
			this->a=this->a+x;
			return this->a;
		}
};

int main(){
	demo d;
	cout<<d.add(20);
}
