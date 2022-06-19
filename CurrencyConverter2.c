//currency converter using Switch Case

#include <stdio.h>
#include <stdlib.h>

int main() {
	int inamt,outamt;
	int ch,ch2,ch3;
	menu:
	printf("\nChoose your Currency...\n1 - Rupee\n2 - Dollar\n3 - Euro\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		rupee:		
		printf("\nChoose Currency to covert into...\n1 - Rupee\n2 - Dollar\n3 - Euro\n");
		scanf("%d",&ch2);
		printf("\nEnter Rupee value to covert...");
		scanf("%d",&inamt);
		switch(ch2)
		{
			case 1:				
				outamt=inamt;
				printf("\n%d Rupee is equal to %d Rupee ",inamt,outamt);
				break;
			case 2:
				outamt=inamt/76;
				printf("\n%d Rupee is equal to %d Dollars",inamt,outamt);
				break;
			case 3:
				outamt=inamt/82;
				printf("\n%d Rupee is equal to %d Euro",inamt,outamt);
				break;
			default :
				printf("\n------Invalid Choice------");
				printf("\nPRESS 1 if you want convert Rupee in Other...");
				scanf("%d",&ch3);
				if(ch3==1)
				{
					goto rupee;
				}
		}
		printf("\nPRESS 1 if you want convert Rupee in Other...");
		scanf("%d",&ch3);
		if(ch3==1)
		{
			goto rupee;
		}
	}
	
	else if(ch==2)
	{
		dollar:		
		printf("\nChoose Currency to covert into...\n1  - Rupee\n2 - Dollar\n3 - Euro");
		scanf("%d",&ch2);
		printf("\nEnter Dollar value to covert...");
		scanf("%d",&inamt);
		switch(ch2)
		{
			case 1:				
				outamt=inamt*76;
				printf("\n%d Dollars is equal to %d Rupee ",inamt,outamt);
				break;
			case 2:
				outamt=inamt;
				printf("\n%d Dollars is equal to %d Dollers",inamt,outamt);
				break;
			case 3:
				outamt=inamt*0.93;
				printf("\n%d Dollars is equal to %d Euro",inamt,outamt);
				break;
			default :
				printf("\n------Invalid Choice------");
				printf("\nPRESS 1 if you want convert Dollar in Other...");
				scanf("%d",&ch3);
				if(ch3==1)
				{
					goto dollar;
				}
		}
	}
	else if(ch==3)
	{
		euro:		
		printf("\nChoose Currency to covert into...\n1  - Rupee\n2 - Dollar\n3 - Euro");
		scanf("%d",&ch2);
		printf("\nEnter Dollar value to covert...");
		scanf("%d",&inamt);
		switch(ch2)
		{
			case 1:				
				outamt=inamt*82;
				printf("\n%d Euros is equal to %d Rupee ",inamt,outamt);
				break;
			case 2:
				outamt=inamt*1.08;
				printf("\n%d Euros is equal to %d Dollers",inamt,outamt);
				break;
			case 3:
				outamt=inamt;
				printf("\n%d Euros is equal to %d Euro",inamt,outamt);
				break;
			default :
				printf("\n------Invalid Choice------");
				printf("\nPRESS 1 if you want convert Dollar in Other...");
				scanf("%d",&ch3);
				if(ch3==1)
				{
					goto euro;
				}
		}	
		
	}
	else
	{
		printf("\n------Invalid Choice------");
	}
	
	
	printf("\nPRESS 1 if you want to run again...");
	scanf("%d",&ch3);
	if(ch3==1)
	{
		printf("\nStarting from  New Choices-----");
		goto menu;
	}
	else
	{
		printf("\n------THANK YOU------");
	}
	return 0;
}
