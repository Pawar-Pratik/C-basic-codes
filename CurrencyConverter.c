
//simple currency converter without using functions
#include <stdio.h>
#include <stdlib.h>

int main() {
	int inamt,outamt;
	int ch1,ch2,ch3;
	
	menu:
	
	printf("\n1-Rupee\n2-Doller\n3-Euro");
	printf("\nEnter your currency choice - ");
	scanf("%d",&ch1);
	
	printf("\n1-Rupee\n2-Doller\n3-Euro");
	printf("\nEnter your choice to convert currency - ");
	scanf("%d",&ch2);
	
	//rupee to any
	if(ch1==1)
	{
		rupee:
		printf("\nEnter Rupee value to covert...");
		scanf("%d",&inamt);
		
		if(ch2==1)
		{
			outamt=inamt;
			printf("\n%d Rupee is equal to %d Rupee ",inamt,outamt);
		}
		else if(ch2==2)
		{
			outamt=inamt/76;
			printf("\n%d Rupee is equal to %d Dollars",inamt,outamt);
		}
		else if(ch2==3)
		{
			outamt=inamt/82;
			printf("\n%d Rupee is equal to %d Euro",inamt,outamt);
		}
		else
		{
			printf("\n------Invalid Choice------");
		}
		printf("\nPRESS 1 if you want convert Rupee in Other...");
		scanf("%d",&ch3);
		if(ch3==1)
		{
			goto rupee;
		}
	}
	
	//doller to any
	else if(ch1==2)
	{
		dollar:
		printf("\nEnter Dollars value to covert...");
		scanf("%d",&inamt);
		
		if(ch2==1)
		{
			outamt=inamt*76;
			printf("\n%d Dollars is equal to %d Rupee ",inamt,outamt);
		}
		else if(ch2==2)
		{
			outamt=inamt;
			printf("\n%d Dollars is equal to %d Dollers",inamt,outamt);
		}
		else if(ch2==3)
		{
			outamt=inamt*0.93;
			printf("\n%d Dollars is equal to %d Euro",inamt,outamt);
		}
		else
		{
			printf("\n------Invalid Choice------");
		}
		printf("\nPRESS 1 if you want convert dollar in Other...");
		scanf("%d",&ch3);
		if(ch3==1)
		{
			goto dollar;
		}
	}
	
	//Euro to any 
	else if(ch1==3)
	{
		euro:
		printf("\nEnter Euros value to covert...");
		scanf("%d",&inamt);
		
		if(ch2==1)
		{
			outamt=inamt*82;
			printf("\n%d Euros is equal to %d Rupee ",inamt,outamt);
		}
		else if(ch2==2)
		{
			outamt=inamt*1.08;
			printf("\n%d Euros is equal to %d Dollers",inamt,outamt);
		}
		else if(ch2==3)
		{
			outamt=inamt;
			printf("\n%d Euros is equal to %d Euro",inamt,outamt);
		}
		else
		{
			printf("\n------Invalid Choice------");
		}
		printf("\nPRESS 1 if you want convert euro in Other...");
		scanf("%d",&ch3);
		if(ch3==1)
		{
			goto euro;
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
