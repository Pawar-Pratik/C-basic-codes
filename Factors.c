//to find the factors of Number input
#include <stdio.h>

int main() {
	int i=2;
	int n;
	printf("Enter no. to find factors");
	scanf("%d",&n);
	
	printf("\nFactors of %d are ",n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
			printf("%d,",i);
		}
		i++;		
	}
	return 0;
}
