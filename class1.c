#include<stdio.h>
main()
{
	int a=5,b,c;
	printf("the value of a before unay operator is %d",a);
	b=a--;
	c=a++ + b;
    printf("\nthe value of a after unary operator is a = %d",a);
	printf("\nthe value of b before unay operator is b= %d",b);
	printf("\nthe value of b before unay operator is c= %d",c);	
}
