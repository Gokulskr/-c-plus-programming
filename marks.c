#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks:");
	scanf("%d",marks);
	if(marks>=35){
		if(marks<40){
			printf("The grade is E");
		}     
		if(marks>50){
			printf("the grade is D");
		}
		if(marks>80){
			printf("the grade is B");
		}
		if(marks>90){
			printf("the grade is A");
		}
		if(marks==100){
			printf("distinction");
		}
	}
	
	return 0;
}