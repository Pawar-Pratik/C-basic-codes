//to check to greatest number between 3 numbers
#include <stdio.h>
#include <stdlib.h>

int main() {
	int no1,no2,ch;
	
	menu:
		
	printf("Enter two nos. : ");
	scanf("%d%d",&no1,&no2);
	
	if(no1>no2)
	{
		printf("\t%d is Greater than %d",no1,no2);
	}
	else if(no1<no2)
	{
		printf("\t%d is less than %d",no1,no2);
	}
	else if((no1==0)&&(no2==0))
	{
		printf("\tBoth the Numbers are 0");
	}
	else
	{
		printf("\t%d is equal to %d",no1,no2);
	}
	
	printf("\n\tCompair again..... PRESS 1 ");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		goto menu;
	}
	else
	{
		printf("\n\t------------THANK YOU------------");
	}

	return 0;
}
