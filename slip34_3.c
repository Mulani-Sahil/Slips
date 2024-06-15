#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
	char ch;
	int c,i;
	printf("Enter character: ");
	scanf("%c",&ch);
	do
	{
	  printf("\n1-ASCII value\n2-Check if vowel\n3-check if it is uppercase\n4-display its next 5 character\n5-Exit\n");
	  scanf("%d",&c);
	   switch(c)
	   {
		case 1:printf("\nASCII value is %d",ch);
		       break;
		case 2:if(ch=='a' || ch=='A'|| ch=='e' || ch=='E'|| ch=='i' || ch=='I'|| ch=='o' || ch=='O'|| ch=='u' || ch=='U')
		          printf("The character is vowel...");
	              else 
		          printf("the charactere is not a vowel");
		        break;
		case 3:if(isupper(ch))
			printf("It is in uppercase");
		      else	
			printf("It is not in uppercase");	
			break;
		case 4:for(i=1;i<=5;i++)
			printf("%c\t",ch++);
			break;
		case 5:exit(0);
		default : printf("Invalid input....");
          }	
	}while(c!=5);
}

