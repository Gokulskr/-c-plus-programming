#include<stdio.h>
int main()
{
	char text[100];
	int i;
	printf("Enter string is :");
	gets(text);
	printf("Entered string is:%s\n",text);
	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]>='a' && text[i]<='z')
		 text[i]= text[i]-0x20;
	}
	printf("string in upper case character :%s\n",text);
	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]>='A' && text[i]<='Z') 
		text[i]= text[i]+0x20;
	}
	printf("string in lower case case character :%s\n",text);
	return 0;
}