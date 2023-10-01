 #include<iostream>
 using namespace std;
 int main(){
 	int arr[3]; 
 	int* ptr;
 	cout<<"display address using array"<<endl;
 	for(int i=0;i<3;i++){
 		cout<<&arr[i]<<endl;
	 }
	 ptr=arr;
	 cout<<"display address using pointers"<<endl;
	 for(int i=0;i<3;i++){
	 	//*ptr=*(arr+i);
	 	cout<<&ptr+i<<endl;
	 }
 }
