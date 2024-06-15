#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,m,n;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of cols:");
	scanf("%d",&n);
	printf("Enter the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Transpose of matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}

