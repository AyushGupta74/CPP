#include<iostream> 
 
using namespace std;   
#include<vector> 
int main()  
{  
    vector<char> v;  
    v.push_back('R');  
    v.push_back('A');  
    v.push_back('J');  
    v.push_back('U');  
    for(int i=0;i<v.size();i++)  
    {
	
    cout<<v[i]<<endl;
    }
    
    v.pop_back();  
    cout<< "after deleting element\n";
	
	 for(int i=0;i<v.size();i++)  
    cout<<v[i]<<endl;
    
 cout<<"v.at(1)   "<<v.at(1);  
}  

