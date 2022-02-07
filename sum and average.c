#include<stdio.h>
int main()
{
	int a,b,sum;
	float avg;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	sum = a+b;
	avg = (float)(a+b)/2;
	printf("\n sum of %d and %d is =%d",a,b,sum);
	printf("\n average of %d and %d is = %f",a,b,avg);
	return 0; 
}