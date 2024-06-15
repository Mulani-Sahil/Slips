/*Write a ‘C’ program to accept three numbers and check whether first
number is between other two or not.*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a<c || a>c && a<b)
		printf("%d is between the other two..",a);
	else
		printf("The number is not between the other two number....");
}		

