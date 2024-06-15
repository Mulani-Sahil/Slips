/*Accept two numbers and perform the following operations till the user
selects Exit.
i. Maximum
ii. Display all numbers between the two
iii. Sum and average
iv. EXIT*/
#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("ENTER TWO NUMBERS: ");
	scanf("%d%d",&a,&b);
	do
	{
	printf("\n1. Maximum\n2. Display all numbers between the two\n3. Sum and average\n4. EXIT\nEnter your choice: ");
	scanf("%d",&ch);

	
	switch(ch)
	  {
		case 1: if(a>b)
			printf("\n%d is bigger\n",a);
			else
			printf("\n%d is bigger\n",b);
			break;
		case 2: int i;
			for(i=a;i<=b;i++)
			{
				printf("%d\n",i);
			}	
			break;
		case 3: printf("\nSum of numbers is %d\nAverage is %d\n",a+b,(a+b)/2);
		break;
	  }
        }while(ch!=4);
}
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
