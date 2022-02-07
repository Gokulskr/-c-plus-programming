#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	c=a-b;
	{
		if(a>b){
				printf("The a is greater than b");
		}	
		else{
			printf("the difference between two numbers=%d",c);
		}
		
	}

	return 0;
}