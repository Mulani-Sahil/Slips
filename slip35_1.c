#include<stdio.h>
int main()
{
	int h,r,sa,v;
	printf("Enter the radius and hight:- \n");
	scanf("%d%d",&r,&h);
	sa=2*3.14*r*r+2*2*3.14*r*h;
	v=3.14*r*r*h;
	printf("Surface area of cylinder is %d\nvolume of the cylinder is %d ",sa,v);
}
