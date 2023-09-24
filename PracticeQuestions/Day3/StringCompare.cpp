#include<iostream>
using namespace std;

void StringComp(char *p, char* q){
    bool flag=0;
    while(*p!='\0'){
        if(*p!= *q)
        {
        flag=1;
        break;
        }
        p++;
        q++;
    }
    if(flag==0){
        cout<<"Equal!!"<<endl;
    }
    else{
        cout<<"Not Equal!!"<<endl;
    }
}

int main()
{
    char str1[10];
    char str2[10];
    cout<<"Enter string1: ";
    cin>>str1;
    cout<<"Enter string2: ";
    cin>>str2;
    StringComp(str1, str2);
}