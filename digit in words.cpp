#include<stdio.h>
int main()
{
	int d;
	printf("enter a single digit:");
	scanf("%d",&d);
	if(d==0)
	{
	    printf("zero\n");
	}
		else if(d==1)
	{
		printf("one\n");
	}
	else if(d==2)
	{
		printf("two\n");
	}
	else
	{
		printf("Invalid digit\n");
		}
	return 0;
}
