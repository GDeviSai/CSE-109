#include<stdio.h>
main()
{
	int a[2][2]={1,2,3,4};
	int a1[2][2]={{1,2},{2,3}};
	int a2[2][2]={{1},{3,4}};
	int a3[2][2]={0};
	int a4[][2]={1,2,3};
	for (int i =0 ; i< 2 ; i++)
	{
		for(int j =0 ; j < 2 ; j++ )
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\t");
			for(int j =0 ; j < 2 ; j++ )
		{
			printf("%d ",a1[i][j]);
			
		}
		printf("\t");
			for(int j =0 ; j < 2 ; j++ )
		{
			printf("%d ",a2[i][j]);
			
		}
		printf("\t");
			for(int j =0 ; j < 2 ; j++ )
		{
			printf("%d ",a3[i][j]);
			
		}
		printf("\t");
			for(int j =0 ; j < 2 ; j++ )
		{
			printf("%d ",a4[i][j]);
			
		}
		
		printf("\n");
		
	}
}

