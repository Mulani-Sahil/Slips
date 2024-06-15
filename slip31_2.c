#include<stdio.h>
int main()
{
	float bs,tax;
	
	printf("Enter the basic salary: ");
	scanf("%f",&bs);
	
	if(bs < 150000)
	{
		tax=0;
	}
	else if(bs >= 150000 && bs <=300000)
	{
		tax=0.2*bs;
	}
	else
	{
		tax=0.3*bs;
	}
	printf("income tax= %f",tax);
	
}


