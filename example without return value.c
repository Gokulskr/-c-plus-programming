#include<stdio.h>
void sum();
void main()
{
	printf("Going to calculate the sum of two numbers");
	sum();
}
void sum()
{
	int a,b;
	printf("\nEnter two numbers :");
	scanf("%d%d",&a,&b);
	printf("\nThe sum is %d ",a+b);
}