/*ii. Write a function in ‘C’, which accepts a character and integer
parameter and displays the next n characters.*/
#include<stdio.h>
int main()
{
	int n;
	char ch;
	
	printf("Enter character: ");
	scanf("%c",&ch);
	printf("Enter Number: ");
	scanf("%d",&n);
	printf("The next %dth character is %c..",n,ch+n);
	
}
