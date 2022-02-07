#include<stdio.h>
int main()
{
	int i;
	printf("Enter the number:");
	scanf("%d",&i);
	for(i=1;i<=10;i++){
		if(i%2==0){
			printf("\n%d",i);
		}
		
	}
	return 0;
	
}