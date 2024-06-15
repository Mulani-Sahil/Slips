#include<stdio.h>
int main()
{
	int n;
	void sod(int n);
	printf("Enter the Nubmer:");
	scanf("%d",&n);
	sod(n);
}
void sod(int n)
{
	int s=0,d;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		s=s+d;
	}
	printf("\n Sum of digit is %d.. ",s);
}
