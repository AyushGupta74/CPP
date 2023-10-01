#include<iostream>
using namespace std;
int main()
{
	//char st[] = "HELLO WORLD";
	char st[20];
	int len;int i=0;
	cout<<"Enter a String"<<endl;
	cin>>st;
	
	while(st[i] !='\0')
	{
	
	i++;
	len++;
    }
	cout<<" Lenght Of Sting is "<<len;
}
	





//#include<iostream>
//using namespace std;
//int cl;
//char* p;
//int main(){
//	cout<<"Enter characters : "<<endl;
//	cin>>cl;
//	char arr1[cl+1];
//	for(int i=0;i<cl;i++){
//	cin>>arr1[i];
//    }
//}
//int strlen(char* p){
//	int ctr = 0;
//	while(*p != '\0'){
//		*p++;
//		ctr++;
//	}
//	return ctr;
//}
