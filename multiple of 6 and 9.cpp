#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%9==0||n%6==0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
