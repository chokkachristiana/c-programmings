#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("enter operator(+,_,*,/):");
	scanf(" %c",&op);
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	switch(op){
	case'+':printf("Result=%d",a+b);
	break;	
	case'-':printf("Result=%d",a-b);
	break;
		case'*':printf("Result=%d",a*b);
	break;
		case'/':printf("Result=%d",a/b);
	break;
		default:printf("Invalid operator");
}
	return 0;
}
