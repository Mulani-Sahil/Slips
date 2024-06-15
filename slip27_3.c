#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,ch,d,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	do
	{
	printf("\n1-EVEN/ODD\n2-LAST DIGIT\n3-DISPLAY POSITIVE NUMBERS\n4-EXIT\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:if(n%2==0)
			 printf("the number is Even..");
			else
			printf("the number is Odd.."); 
			break;
		case 2:	d=n%10;
			printf("The last digit is %d",d);
			break;
		case 3:for(i=1;i<=n;i++)
			{
				printf("%d\t",i);
			}	
			 break;
		case 4:exit(0);
			break;
		default :printf("Invalid Choice......");		 
	}
	
	}while(ch!=5);
}

