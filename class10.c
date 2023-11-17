#include <stdio.h>
main()
{   
//    int a=10, b= 80 , c=20;
//	printf("Enter values of a b and c:");
//	scanf("%d %d %d",&a,&b,&c);
//	if (a>b && a>c)
//	{
//		printf("A is greater");
//	}	
//	else if (b>a && b>c)
//	{
//		printf("B is largest");
//	}
//	else
//	{
//		printf("C is largest");
//	}


// Finding the greatest of three numbers using nested if

//int a= 10, b=20,c=30;
//if (a>b)
//{
//	if(a>c)
//	{
//		print("A is largest");
//	}
//	else
//	{
//		print("C is largest");
//	}
//}
//else
//{
//	if (b>c)
//	{
//		printf("B is largest")
//	}
//	else
//	{
//		printf("c is largest");  // forgot this condition
//	}
// } 

// Switch statement

int g;
	printf("Enter your choice of character : ");
	scanf("%d",&g);
	switch(g)
	{
		case 'a': printf("do whatever u want"); // comparing ascii values
		break;
		case 2: printf("you ain't got a choice");
		break;
		default : printf("you ain't got a choice");
	}
	
}
