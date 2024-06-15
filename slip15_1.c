//Write a ‘C’ program to perform all arithmetic operations on two integers.
#include<stdio.h>
int main()
{
	int a,b;
	float div;
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	printf("\nAddition=%d\nSubraction=%d\nMultiplication=%d\n",a+b,a-b,a*b);
	div=a/b;
	printf("Division=%f",div);
}
