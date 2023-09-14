#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char* name[5]={"Ram","Rahul","Rohit","Shyam","sunil"};
	
//	char* name1[5]={"abcde","pqrst","fghij","klmno","uvwxy"};
	
	for(int i=0;i<5; i++){
	int x=strlen(name[i]);
		
		for(int j=0; j<=x; j++){
			cout<<*(name+j)<<endl;
		}
		cout<<endl;
	}
	
	
		
}
	
