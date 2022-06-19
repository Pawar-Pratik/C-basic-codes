#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int no1,no2,add,sub,mul,ch;
	float div;
	
	abc:
	
	printf("Enter two No. : \n");
	scanf("%d%d",&no1,&no2);
	
	printf("\n1: Add\n2: Sub\n3: mul\n4: div\n");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		add=no1+no2;
		printf("\nAddition Of %d and %d id %d",no1,no2,add);
	}
	else if (ch==2)
	{
		sub=no1-no2;
		printf("\nSubtraction Of %d and %d id %d",no1,no2,sub);
	}
	else if (ch==3)
	{
		mul=no1*no2;
		printf("\nMultiplication Of %d and %d id %d",no1,no2,mul);
	}
	else if (ch==4)
	{
		div=no1/no2;
		printf("\nDivision Of %d and %d id %f",no1,no2,div);
	}
	else
	{
		printf("\n----------Invalid Choice----------\n");
	}
	
	
	printf("\nto Calculations again press 1\n");
	scanf("%d",&ch);
	
	if (ch==1)
	{
		goto abc;
	}
	else
	{
		printf("\n----------Thank You-------------\n\n");
	}
	return 0;
}
