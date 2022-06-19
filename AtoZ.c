//Printing A to Z & a to z with ascii values
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i=65;
	printf("--------------A to Z & a to z--------------");
	while(i<=90)
	{
		printf("\n%d =\t %c\t\t|\t %d =\t %c",i,i,i+32,i+32);
		i++;
	}
	
	return 0;
}
