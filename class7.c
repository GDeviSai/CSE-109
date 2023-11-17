#include <stdio.h>
main()
{
	int n=0,sum=0,fact=1;
	printf("Enter the number:");
	scanf("%d",&n);
//for( int i=0;i<=n;i+=2)
//	{
//		printf("%d\n",i);
//    }
//	for ( i =1;i<n;i+=2)
//	{
//		printf("%d\n",i);
//	}
for ( int i=1 ;i<=n;i++) 
{
	sum+=i;
	fact=fact*i;	
}
	printf("sum is %d\n",sum);
    printf("fact is %d",fact);
}
