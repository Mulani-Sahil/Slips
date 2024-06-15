
#include<stdio.h>
int main()
{
	int a,b,c,d,e,s=0,percentage;
	printf("Enter five sunjects marks: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	s=a+b+c+d+e;
	
	percentage=s/5;
	
	char grade;
	 if (percentage >= 90) 
	 {
        grade = 'O';
    }
     else if (percentage >= 75) 
     {
        grade = 'A';
    } 
    else if (percentage >= 60)
     {
        grade = 'B';
    } 
    else if (percentage >= 40) 
    {
        grade = 'C';
    } 
    else 
    {
        grade = 'F';
    }

	printf("Total marks scored out of 500 is %d\n",s);
	printf("Percentage is %d\n",percentage);
	printf("Grade is %c",grade);
}
