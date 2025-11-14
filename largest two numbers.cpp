#include<stdio.h>
int main()
{
	int a,b,big;
	printf("enter a and b values:");
	scanf("%d%d",&a,&b);
	big=(a,b)?a:b;
	printf("lareger value is:%d\n");
	return 0;
}
