#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	if(!n==0){
		if(n%2==0){
			printf("It is a even number");
		}
		else{
			printf("It is a odd number");
		}
	}
	else{
		printf("Enter valid number other than zero");
	}
	return 0;
}