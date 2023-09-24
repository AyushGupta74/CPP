#include<iostream>
using namespace std;

int StringCopy(char* p, char* q)
{
    while(*q!='\0')
    {
        *p = *q;
        ++p;
        ++q;
    }
}

int Reverse(char* x, char* y, int l)
{
    l--;
    while(l!=0)
    {
        ++x;
        --l;
    }
    *x='\0';
    while(*y!='\0')
    {
        *x = *y;
        y++;
        x--;
    }
}

int main()
{
    char str[]= {"Pune"};
    char strcopy[10];
    char reverse[10];
    int i=0, len=0;

    StringCopy(strcopy,str);
    cout<<strcopy<<endl;
    while(str[i]!='\0')
    {
        strcopy[i]=str[i];
        ++len;
        i++;
    }
    strcopy[i]='\0';
    cout<<"String Copy is: "<<strcopy<<endl;
    cout<<"String Length is: "<<len<<endl;
    cout<<"String Size is: "<<sizeof(strcopy)<<endl;
    cout<<"Size of 'Pune' is: "<<sizeof("pune")<<endl;

    Reverse(reverse, strcopy, len);
    cout<<reverse<<endl;
    i=0;
    reverse[len]='\0';
    len--;
    while(str[i]!='\0')
    {
        reverse[len]=str[i];
        i++;
        len--;
    }
    cout<<"String Reverse is: "<<reverse<<endl;

    
}