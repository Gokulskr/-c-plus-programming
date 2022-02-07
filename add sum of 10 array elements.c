#include<stdio.h>
int main()
{
	int i;
	int arr[10];
	int sum=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter the %d element\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+arr[i];
	}
	printf("The sum of 10 array elements is %d",sum);
	return 0;
}