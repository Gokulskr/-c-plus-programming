#include<iostream>
using namespace std;
class account{
	public:
		float salary=6000.05;
		
};
class programmer:public account{
	public:
		float bonus=3000.10;
};
int main(void)
{
	programmer p1;
	cout<<"salary:"<<p1.salary<<"\n";
	cout<<"bonus:"<<p1.bonus<<"\n";
	
}