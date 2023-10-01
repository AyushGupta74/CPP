#include <iostream>
#include <istream>
#include <sstream>
#include <string>
 
using namespace std;
 
int main()
{
    istringstream str("			Ameya");
    string line;
    getline(str >>ws, line);
 
    cout << line << endl;
 
    
    cout << "b" << ends;
    cout << "c" << endl;
 
    return 0;
}
