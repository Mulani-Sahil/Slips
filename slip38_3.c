#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,x,y;
	printf("Enter the number of rows: ");
	scanf("%d",&x);
	printf("Enter the number of columns: ");
	scanf("%d",&y);
	printf("enter the first matrix: \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix: \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
	c[i][j]=a[i][j]*b[i][j];
		}
	}
	printf("Multipled matrix: \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
