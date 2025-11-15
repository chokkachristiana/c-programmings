#include<stdio.h>
int main()
{	printf("enter order of matrix a:");

	int a[10][10],i,j,n,tr=0;
	scanf("%d", &n);
	printf("enter matrix a elements: of\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<n;i++);
	tr=tr+a[i][i];
	printf("trace of a given matrix is %d",tr);
	return 0;
}
