#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Line.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int option=1;
	cout<<"Welcome to Graphics Editor\n";
	cout<<"\n Choose Option: \n";
	cout<< "1. Line\n";
	cout<< "2. Rectangle\n";
	

	do{
		
			cout<<"Welcome to Graphics Editor\n";
			cout<<"\n Choose Option: \n";
			cout<< "1. Line\n";
			cout<< "2. Rectangle\n";
			cout<< "4. Exit\n";
			cin>>option;
			
			switch(option){
				case 1:
					{
						int x1,y1,x2,y2;
						cout<< " Line is getting created.";
						cout <<" Enter First Point Details\n";
						cout << " X=";
						cin>>x1;		
						cout << " y=";
						cin>>y1;
						
						Point pt1(x1,y1);
						
						cout <<"\nEnter Second Point Details\n";
						cout << " X=";
						cin>>x2;		
						cout << " Y=";
						cin>>y2;
						Point pt2(x2,y2);		
						Line l(pt1, pt2);
						l.show();
					}
					
					
					break;
				case 2:
					cout<< " Rectangle is getting created.";
					break;
				
				case 4:
					cout<< " Exiting from app.";
					break;
					
			}
		
	}
	while( option !=4);
	cout<< "Terminating application....";
	return 0;
}
