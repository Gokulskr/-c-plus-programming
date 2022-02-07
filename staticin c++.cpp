#include<iostream>
using namespace std;
class account{
	public:
		int accno;
		string name;
		static float rateofinterest;
		account(int accno,string name)
		{
			this->accno=accno;
			this->name=name;
		}
		void display()
        {
        	cout<<accno<<"name"<<rateofinterest<<endl;
        }

};
float account::rateofinterest=6.5;
int main(void){
	account a1=account(201,"sanjai");
	account a2=account(202,"nakul");
	a1.display();
	a2.display();
	return 0;
}