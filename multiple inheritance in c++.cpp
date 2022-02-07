#include<iostream>
using namespace std;
class M{
	protected:
	int m;
	public:
		void get_m(int);
};
class N{
	protected:
		int n;
		public:
			void get_n(int);
};
class put:public M,public N
{
	public:
		void display(void);
		
};
void M::get_m(int x)
{
	m=x;
}
void N::get_n(int y)
{
	n=y;
}
void put::display(void)
{
	cout<<"m="<<m<<"\n";
	cout<<"n="<<n<<"\n";
	cout<<"m*n="<<m*n<<"\n";
	
}
int main()
{
	put P;
	P.get_m(10);
	P.get_n(20);
	P.display();
	return 0;
}