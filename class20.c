#include <stdio.h>
void ref1(int arr[], int size);
void ref2(int a);
void largest_and_smallest(int arr[]);
main()
{
	int arr[6]={1,2,3,4,5,6};
	ref1(arr,6);
	ref2(arr[1]);
	largest_and_smallest(arr);
}
void ref1(int arr[], int size)
{
	for(int i=0 ; i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void ref2(int a)
{
	printf("\n%d",a);
}
void largest_and_smallest(int arr[])
{
	int smallest=arr[0];
	int largest=arr[0];
	for(int i ; i< 6 ; i++)
	{
		if (arr[i]>largest)
		{
			largest = arr[i];
		}
		if (arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}
	printf("\nsmallest is %d and largest is %d",smallest,largest);
}
