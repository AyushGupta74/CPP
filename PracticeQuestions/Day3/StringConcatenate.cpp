#include<iostream>
using namespace std;

void StringConcat(char *p ,char *q){
    while(*p!='\0'){
        p++;
    }
    *p=' ';
    p++;
    while(*q!='\0'){
        *p = *q;
        p++;
        q++;
    }
    *p='\0';
}

int main()
{
    char str[20]={"IET"};
    char str2[20]={"CDAC"};
    StringConcat(str,str2);
    cout<<str<<endl;
}