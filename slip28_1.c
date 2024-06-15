#include<stdio.h>
int main()
{
	int l,b,a,p;
	printf("enter length and breadth: ");
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("Area is %d\nPerimeter is %d",a,p);
}
