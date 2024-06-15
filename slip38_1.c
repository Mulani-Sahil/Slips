//slip 38
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the NUmber: ");
	scanf("%d",&n);
	if(n>0 && n<9)
		printf("The Number Falls between 0 and 9");
	else	
		printf("The Number Does Not Falls between 0 and 9");
}
