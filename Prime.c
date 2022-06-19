//to check given number is prime or not
#include <stdio.h>

int main() {
	
	int i,n,x=1;
	printf("\nEnter no. to check If it Prime or not....");
	scanf("%d",&n);
	i=2;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			x=0;			
			break;
		}
		i++;	
	}
	if(x==1)
	{
		printf("\n %d is prime number",n);
	}
	else
	{
		printf("\n %d is not prime number",n);
	}	
	return 0;
}
