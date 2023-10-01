#include<iostream>
using namespace std;
class add
{
	float sum;
	public:
		int add(int a, int b)
		{
			sum=a+b;
			return sum;
	    }
	    int add(int a, int b, int c)
		{
			sum= a+b+c;
			return sum;
	    }
	    int add(int a, float b)
	    {
	    	sum=(float)a+b;
	    	return sum;
		}
}

int main(){
	
}
