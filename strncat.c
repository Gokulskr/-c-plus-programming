#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20]="Hello";
	char s2[20]="\tworld";
	strncat(s1,s2,4);
	printf("concartnation using strncat:%s",s1);
	return 0;
	
}
