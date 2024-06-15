/*i.
Write a ‘C’ program to accept radius of circle and calculate area
and circumference.*/
#include<stdio.h>
int main()
{
	int r,a,p;
	printf("Enter the Radius: ");
	scanf("%d",&r);
	a=3.14*r*r;
	p=2*3.14*r;
	printf("\nArea is %d...\nCircumference is %d...",a,p);
}
