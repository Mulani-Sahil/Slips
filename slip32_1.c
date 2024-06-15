#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,power;
	printf("Enter the number and index respectively..: ");
	scanf("%d%d",&x,&y);
	power=pow(x,y);
	printf("The answer is %d",power);
}
