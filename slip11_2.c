//sum of digit
#include<stdio.h>
int main()
{
	int n,d,s=0;
	printf("ENTER NUMBER: ");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	printf("\n SUM OF DIGIT IS %d",s);
}
