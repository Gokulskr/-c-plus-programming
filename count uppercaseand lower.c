#include<stdio.h>
int main()
{
	char text[100];
	int i;
	int countL,countU,countS;
	printf("Enter string is :");
	gets(text);
	printf("Entered string is:%s\n",text);
	countL=countU=countS=0;
	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]>='A' && text[i]<='Z' || text[i]>='a' && text[i]<='z')
		{
			if((text[i]>='A' && text[i]<='Z'))
			{
				countU++;
			}
			else
			{
				countL++;
			}
		}
		else
		{
			countS++;
		}
	}
	printf("upper case character :%d\n",countU);
	printf("Lower case character:%d\n",countL);
	printf("Special case character:%d\n",countS);
	return 0;
}