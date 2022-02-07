#include<stdio.h>
int main()
{
	int arr[3][2],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d\t",arr[i][j]);
		}
		for(j=0;j<2;j++){
			printf(" the matrics are %d",arr[i][j]);
		}
	}
	return 0;
	
}