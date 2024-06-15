//Check the nmber is divisible by 3 and 5 or not
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	if(n%3==0 && n%5==0)
		printf("The Number is divisible by 3 as well as 5..");
	else
		printf("The Number is not  divisible by 3 as well as 5");	
} 


