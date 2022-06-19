//to check even number or not and addition of them (1 to 20)

#include <stdio.h>

int main() {
	int i=1,sum=0;
	
	while(i<=20)
	{
		if(i%2==0)
		{		
			printf("\n\t %d",i);
			sum=sum+i;		
		}
	i++;
	}
	printf("\nSum of first 20 even numbers is '%d'",sum);
	return 0;
}
