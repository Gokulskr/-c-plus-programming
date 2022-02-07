#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20]="beginers book";
	char s2[20]="\tbeginers book.com";
	strcat(s1,s2);
	printf("output string after concartination:%s",s1);
	return 0;
	
}
