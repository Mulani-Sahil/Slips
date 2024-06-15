#include<stdio.h>
int main()
{
	float c,f;
	printf("enter temperature in fahrenheit: ");
	scanf("%f",&f);
	c=0.57*(f-32);
	printf("The tempearature in celsius is %f",c);
	
}
