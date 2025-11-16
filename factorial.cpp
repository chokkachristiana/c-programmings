#include<stdio.h>
int main()
{
	int fact=1,i=2,n;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("fact=%d\n",fact);
	return 0;
}
