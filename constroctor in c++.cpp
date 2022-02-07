#include<iostream>
using namespace std;
class employee
{
	public:
		employee()
		{
			cout<<"default constructor invokes";
		}
};
int main(){
	employee e1;
	employee e2;
	return 0;
}