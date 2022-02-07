#include<iostream>
using namespace std;
class Base{
	public:
		void display(){
			cout<<"\n Display Base";
		}
		virtual void show(){
			cout<<"\n show base";
		}
		};
		class Derived: public Base
		{
		public:
		void display(){
		cout<<"\n Display derived";	
		}
		void show(){
		cout<<"\n show Derived";
		}
		};

int main()
{
	Base B;
	Derived D;
	Base *bptr;
	cout<<"\n bptr points to base \n";
	bptr=&B;
	bptr->display();
	bptr->show();
	cout<<"\n\n bptr points to derived \n";
	bptr=&D;
	bptr->display();
	bptr->show();
	return 0;
	
}
