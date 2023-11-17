#include<stdio.h>
main()
{
	int n, reverse =0 , rem;
	printf("Enter the number:");
	scanf("%d",&n);
	int number = n;
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n/=10;
		
	}
	printf("the reversed number is %d",reverse);
	if (reverse==number)
	printf("\nThe number is palindrome");
	else
	printf("\nThe number is not palindrome");
	
}

