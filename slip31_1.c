#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character in lowercase: ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='A'|| ch=='e' || ch=='E'|| ch=='i' || ch=='I'|| ch=='o' || ch=='O'|| ch=='u' || ch=='U')
		          printf("The character is vowel...");
	              else 
		          printf("the charactere is not a vowel");	
}
