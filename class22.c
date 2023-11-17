#include<stdio.h>
main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int key = 8 , loc=-1 , mid , beg =0, last = 9;
	for (int i =0 ; i<10 ; i++)
	{
		scanf("%d",&arr[i]);
	}
	while(1)
	{
		mid = ( beg + last)/2;
		if ( arr[mid]==key)
		{
			loc = mid+1;
			break;
		}
		else if (arr[mid]>key)
		{
			last = mid -1;
		}
		else
		{
			beg = mid +1;
		}
	}
	if (loc!=-1)
	{
		printf("%d",loc);
    }
    else 
    {
    	printf("not found");
	}
}
