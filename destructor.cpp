#include<iostream>
using namespace std;
class employee
{
	public:
		employee()
		{
			cout<<"constructor invoked"<<endl;
		}
		~employee()
		{
			cout<<"DEsrtructor invoked"<<endl;
		}
};
int main(void)
{
	employee e1;
	employee e2;
	return 0;
}