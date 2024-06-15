#include<stdio.h>
int main()
{	
	int n;
	void sod(int n);//declaration
	printf("Enter the number: ");
	scanf("%d",&n);
	sod(n);//calling
}
void sod(int n)
{
	int d,s=0;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		s=s+d;

		    
		
	}
	printf("The sum of digit is %d",s);
}
