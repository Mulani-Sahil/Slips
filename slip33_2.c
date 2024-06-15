#include<stdio.h>
int main()
{	int n;
	void factorial(int n);
	printf("Enter the number: ");
	scanf("%d",&n);
	factorial(n);
}
void factorial(int n)
{
	int s=1,i;
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("Factorial of %d is %d",n,s);
}
