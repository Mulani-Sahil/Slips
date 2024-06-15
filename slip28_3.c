#include<stdio.h>
int main()
{
	int a[100],n,i,max,min;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		  min=a[i];
		 if(a[i]>max)
		   max=a[i]; 
	}
	printf("lagest number is %d\n",max);
	printf("Smallest number is %d",min);
}
