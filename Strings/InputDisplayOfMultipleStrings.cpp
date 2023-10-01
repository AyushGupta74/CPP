#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char* name[5];
    int i, j, size, strnum, strlength;
    cout<<"Enter size for all strings: ";
    cin>>size;
    cout<<"Enter number of strings: ";
    cin>>strnum;

    for(i=0;i<strnum;i++)
    {
        name[i]=new char[size+1];
        cout<<"Enter string "<<i+1<<": ";
        cin>>name[i];
    }

    for(i=0;i<strnum;i++)
    {
        strlength=strlen(name[i]);
        cout<<"String "<<i+1<<": ";
        for(j=0;j<strlength;j++)
        {
            cout<<*(*(name+i)+j);
        }
        cout<<endl;
    }
}
