#include <stdio.h>
main()
{
	int n , i=1, fact=1 ;
	printf("Enter the number :");
	scanf("%d",&n); 
	while (i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
}
