//i.Write a ‘C’ program to find the area and perimeter of rectangle.

#include<stdio.h>
int main()
{
	int l,b,a,p;
	printf("Enter the Length and breadth of a rectangle: ");
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("\n Area is %d.\n Perimeter is %d.",a,p);
}
