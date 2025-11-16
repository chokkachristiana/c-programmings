#include<stdio.h>
int main()
{
	char s[100];
	int count=0,i;
	puts("enter your alphabets:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		
		{
			count++;
		}
	}
	return 0;
}
