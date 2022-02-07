#include<iostream>
using namespace std;
class shape{
	public:
		int a;
		int b;
		void get_data(int n,int m)
		{
			a=n;
			b=m;
		}
};
class rectangle:public shape{
	public:
		int rect_area()
		{
			int result=a*b;
			return result;
		}
	
};
class triangle:public shape{
	public:
		int triangle_area()
		{
			float result=0.5*a*b;
			return result;
		}
};
int main()
{
	rectangle r;
	triangle t;
	int length,breadth,base,height;
	std::cout<<"Enter the length and breadth of a rectangle:"<<std::endl;
	cin>>length>>breadth;
	r.get_data(length,breadth);
	int m=r.rect_area();
	std::cout<<"area of the rectangle is:"<<m<<std::endl;
	std::cout<<"enter the base and height of triangle is:"<<std::endl;
	cin>>base>>height;
	float n=t.triangle_area();
	std::cout<<"area of the rectangle is:"<<n<<std::endl;
	return 0;
	}