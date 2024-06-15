#include<stdio.h>
int main()
{
	int a,b;
	float c;
	char ch;
	printf("+:-Adition\n-:-subtraction\n*:-Multiplication\n/:-Division\n");
	printf("Enter your choice: ");
	scanf("%c",&ch);
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case '+':printf("Addition is %d",a+b);
		       break;
		case '-':printf("subtraction is %d",a-b);
		       break;
		case '*':printf("Multiplication is %d",a*b);
		       break;
		case '/': c=a/b;
			printf("Division is %f",c);
		        break;
		default :printf("Invalid choice....");                             
	}
}
