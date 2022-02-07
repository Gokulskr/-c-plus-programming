#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of x and y:");
	scanf("%d%d",&x,&y);
	if(x%2==0){
		printf("\n x is a even number");
	}
		else{
			printf("\n x  is odd number");
		}
	if(y%2==0){
		printf("\n y is a even number");
	}
	else{
		printf("\n y is a odd number");
	}
	return 0;
	}
	