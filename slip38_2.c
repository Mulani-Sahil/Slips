/*slip 38_1
array in reverse order*/
#include<stdio.h>
int main()
{
	int a[10][10],i,j,x,y;
	printf("Enter no of rows: ");
	scanf("%d",&x);
	printf("Enter no of columns: ");
	scanf("%d",&y);
	printf("Enter the Matrix Elemrnts :");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("the Matrix Elements are :\n");
	for(i=x-1;i>=0;i--)
	{
	for(j=y-1;j>=0;j--)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}

