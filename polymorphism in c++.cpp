#include<iostream>
using namespace std;
int volume(int);
long volume(double,int);
long volume(long,int,int);
int main()
{
	cout<<"calling the volume () function for computing the volume of cube_"<<volume(10)<<"\n";
	cout<<"calling the volume () function for computing the volume of cylinder_"<<volume(2.5,8)<<"\n";
	cout<<"calling the volume () function for computing the volume of rectangular box_"<<volume(100L,75,15);
	return 0;
}
int volume(int S)
{
	return(S*S*S);
	
}
long volume(double r,int h){
	return(3.14519*r*r*h);
}
long volume(long l,int b,int h){
	return(l*b*h);
}