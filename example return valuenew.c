#include<stdio.h>
int square();
void main()
{
	printf("Going to calculate the area of the square\n");
	float area=square();
	printf("The area of the square %f\n",area);
}
int square()
{
	float side;
	printf("Enter the length of the side in metres:");
	scanf("%f",&side);
	return side*side;
}