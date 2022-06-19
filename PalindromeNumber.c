//to check given number is palindrome or not
#include <stdio.h>

int main() {
	int n,rev=0,temp,r;
	printf("Enter No. : ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	printf("\nReverse of %d is %d",temp,rev);
	if(temp==rev)
	{
		printf("\n%d is Palindrome number",temp);
	}
	else
	{
		printf("\n%d is Not Palindrome number",temp);
	}
	
	return 0;
}
