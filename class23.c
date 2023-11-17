#include <stdio.h>
void swap(int* a, int*b ); // a function to swap 
void bubblesort(int arr[],int n); // function to sort the array
main()
{
	int arr[6]={1000,25,33,4,5,6},n=6; 
	for (int i =0 ; i<n;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	bubblesort(arr,6);
	for (int i =0 ; i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void swap(int* a, int* b) 
{
	int temp = *a;
	*a=*b;
	*b=temp;
}
void bubblesort(int arr[],int n)
{
	for (int i=0 ; i<n-1 ; i++)
	{
		for (int j =0 ; j<n-i-1;j++)
		{
			if ( arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);  // swapping the elements
			}
		}
	}
}
