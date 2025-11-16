#include<stdio.h>
int main()
{
	int d;
	printf("enter a number:");
	scanf("%d",&d);
	if(d==1)
	{
	    printf("sunday\n");
	}
		else if(d==2)
	{
		printf("monday\n");
	}
	else if(d==3)
	{
		printf("tuesday\n");
	}
	else if(d==4)
	  {
		printf("wednesday\n");
		}
		else if(d==5)
		{
			printf("thursday\n");
		}
		else if(d==6)
		{
			printf("friday\n");
		}
			else if(d==7)
		{
			printf("saturday\n");
		}
		else 
		{
			printf("Invalid day\n");
		}
		return 0;
      }
