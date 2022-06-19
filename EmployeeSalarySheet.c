//simple employee salary sheet including TF,PF...etc

#include <stdio.h>
#include <stdlib.h>

int main() {
	int empsal,empid,ch;
	char empname[10];
	int bassal;
	float hra,ta,ma,pf;
	float grosssal;
	
	menu:
	printf("Enter Employee Id : ");
	scanf("%d",&empid);
	
	printf("Enter Employee Name : ");
	scanf("%s",empname);
	
	printf("Enter Employee Salary : ");
	scanf("%d",&empsal);
	
	if(empsal <= 10000 )
	{
		hra=empsal*0.07;
		ta=empsal*0.06;
		ma=empsal*0.05;
		pf=empsal*0.06;
	}
	else if((empsal > 10000 )&&(empsal <= 20000))
	{
		hra=empsal*0.08;
		ta=empsal*0.07;
		ma=empsal*0.06;
		pf=empsal*0.07;
	}
	else
	{
		hra=empsal*0.09;
		ta=empsal*0.08;
		ma=empsal*0.07;
		pf=empsal*0.08;
	}
	grosssal=empsal+hra+ta+ma-pf;
	
	printf("\n\t\tEmployee Id : \t\t %d",empid);
	printf("\n\t\tEmployee Name : \t %s",empname);
	printf("\n\t\tEmployee Salary : \t %d",empsal);
	printf("\n\t\tEmployee HRA : \t\t %f",hra);
	printf("\n\t\tEmployee TA : \t\t %f",ta);
	printf("\n\t\tEmployee MA : \t\t %f",ma);
	printf("\n\t\tEmployee PF : \t\t %f",pf);
	printf("\n\t\tEmployee Gross Salary :  %f",grosssal);
	
	printf("\n\n\tIf you want to calculate next Employee Press 1 -");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		goto menu;
	}
	else
	{
		printf("\n\t\t -------------- THANK YOU -------------- \n");
	}
	
	return 0;
}
