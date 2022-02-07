#include<stdio.h>
#include<string.h>
int main()
{
	char first[100],second[100],t[100];
	printf("Enter first string\n");
	gets (first);
	printf("Enter the second string\n");
	gets (second);
	printf("\n before swapping\n");
	printf("First string:%s\n",first);
	printf("second string:%s\n",second);
	strcpy(t,first);
	strcpy(first,second);
	strcpy(second,t);
	printf("After swapping\n");
	printf("First string:%s",first);
	printf("\nsecond string :%s\n",second);
	return 0;
}