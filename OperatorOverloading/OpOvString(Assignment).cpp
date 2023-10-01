#include<iostream>
#include<string.h>
using namespace std;

class String
{
    char *ptr;
    int length;
    public:
        String()
        {
            length=0;
            *ptr='\0';
        }

        String(char* str)
        {
            length=strlen(str);
            ptr= new char[length+1];
            strcpy(ptr, str);
        }

        String& operator =(String& s)
        {
            length= s.length;
            char* ptr1=s.ptr;
            delete[]ptr;
            ptr= new char[length+1];
            strcpy(ptr,ptr1);
            return *this;
        }

        String(String&)
        {
            cout<<"Copy constructor is called."<<endl;
        }

        void display()
        {
            cout<<ptr<<endl;
            cout<<"Length: "<<length<<endl;
        }
};

int main()
{
    String s1("Ayush");
    cout<<"String 1: ";
    s1.display();
    String s2("K.Gupta");
    cout<<"String 2: ";
    s2.display();
    cout<<endl;
    s2=s1;
    cout<<"After assignment operator(s2=s1) "<<endl;
    cout<<"String 1: ";
    s1.display();
    cout<<"String 2: ";
    s2.display();
    
    String s4=s1;
    return 0;
}