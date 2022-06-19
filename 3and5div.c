
//To check that Number is divisible by 3 & 5 or not
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,ch;
	
	menu:
	printf("\nEnter any number : ");
	scanf("%d",&n);
	
	if((n%3==0)&&(n%5!=0))
	{
		printf("\n\t\t%d is only divisible by 3",n);
	}
	else if((n%5==0)&&(n%3!=0))
	{
		printf("\n\t\t%d is only divisible by 5",n);
	}
	else if((n%3==0)&&(n%5==0))
	{
		printf("\n\t%d is divisible by both 3 and 5 ",n);
	}
	else
	{
		printf("\n\t\t%d in not Divisible by both 3 and 5",n);
	}
	
	printf("\n\t\tPRESS 1 to Run again....");
	scanf("%d",&ch);
	if(ch==1)
	{
		goto menu;
	}
	else
	{
		printf("\n\t--------THANK YOU--------");
	}
	return 0;
}
