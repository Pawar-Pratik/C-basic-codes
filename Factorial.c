// Simple factorial code in c

#include <stdio.h>

int main() {
	int i,n,fact=1;
	printf("Enter no. : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of %d is %d",n,fact);
	return 0;
}
