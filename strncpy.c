#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100]="string1";
	char s2[100]="string2:Iam gonna copied into s1";
	strncpy(s1,s2,17);
	printf("string s1:%s",s1);
	return 0;
	
}
