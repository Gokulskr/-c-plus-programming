#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	if(isupper(ch))
	printf("%c is an uppercase",ch);
	else if(islower(ch))
	printf("%c is a lower",ch);
	else if(isspace(ch))
	printf("%c  is a space \n",ch);
	else
	printf("%c is none from uppercase,lowercase and space:\n",ch);
	return 0;
}