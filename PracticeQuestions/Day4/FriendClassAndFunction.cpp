#include<iostream>
#include<string.h>
using namespace std;

class Secret
{
    int password;
    char username[10];

    public:

    Secret()
    {
        strcpy(this->username,"Default");
        password= 1000;
    }
    Secret(int pw, const char *un)
    {
        strcpy(this->username,un);
        password= pw;
    }

    void display()
    {
        cout<<"Username: "<<username<<endl;
        cout<<"Password: "<<password<<endl;
    }
    friend class SecretFriend;
};

class SecretFriend
{
    public:

    void display(Secret &s)
    {
        cout<<"Accessing through FriendFunction"<<endl;
        cout<<"Username: "<<s.username<<endl;
        cout<<"Password: "<<s.password<<endl;
        cout<<endl;
    }
};

int main()
{
    Secret s;
    SecretFriend sf;
    sf.display(s);
    Secret s1(1111,"UserDefined");
    s1.display();
    return 0;
}