//leap or nor...
#include<stdio.h>
int main()
{
	int n;
	printf("ENTER YEAR: ");
	scanf("%d",&n);
	if(n%4==0)
	printf("\nLEAP YEAR.");
	else
	printf("\nNOT A LEAP YEAR.");
}
