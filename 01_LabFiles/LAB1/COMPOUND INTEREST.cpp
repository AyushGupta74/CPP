#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double p,t,r;
	cout<<"Enter Principal "<<endl;
	cin>>p;
	cout<<"Enter Time "<<endl;
	cin>>t;
	cout<<"Enter Rate "<<endl;
	cin>>r;
	double amount=p*(pow((1+r/100),t));
	cout<<"Amount is "<<amount<<endl;
	double ci=amount-p;
	cout<<"Compound interest is "<<ci<<endl;
	return 0;
}
