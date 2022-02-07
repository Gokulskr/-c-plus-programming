#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter  a character:");
	scanf("%c",&ch);
	if(isalnum(ch))
	printf("%c is a alphanumeric character:\n",ch);
	else
	printf("%c is notv an alphanumeric character:\n",ch);
	return 0;
}