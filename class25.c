#include<stdio.h>
int row_x_column(int arr1[2][2],int arr2[2][2],int row,int column);
void row_swap_column(int arr[2][2],int index);
void swap(int* i,int* j);
main()
{
	int a[2][2],a1[2][2],a2[2][2];
	for(int i =0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter  element %d for a matrix  row %d\n",j+1,i+1);
			scanf("%d",&a[i][j]);
		}
		for(int j=0;j<2;j++)
		{
			printf("Enter element %d for a1 mattrix row %d\n",j+1,i+1);
			scanf("%d",&a1[i][j]);
		}
	}
	printf(" a");
	printf("\t");
	printf(" a1\n");
	for(int i =0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\t");
		for(int j=0;j<2;j++)
		{
			printf("%d ",a1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0 ; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			a2[i][j]=a[i][j]+a1[i][j];
		}
	}
	printf("the sum matrix a2 is \n");
	for(int i =0;i<2;i++)
	{
		for(int j =0; j<2;j++)
		{
			printf("%d ",a2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i =0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			a2[i][j]=row_x_column(a,a1,i,j);
		}
	}
	printf("\nthe multiplication the two is:\n");
	for(int i =0;i<2;i++)
	{
		for(int j =0; j<2;j++)
		{
			printf("%d ",a2[i][j]);
		}
		printf("\n");
	}
	printf("\ntranspose of a1 :\n");
	for(int i =0;i<2;i++)
	{
		row_swap_column(a1,i);
		printf("%d",a)
	}
	for(int i =0;i<2;i++)
	{
		for(int j =0; j<2;j++)
		{
			printf("%d ",a1[i][j]);
		}
		printf("\n");
	}
}
int row_x_column(int arr1[2][2],int arr2[2][2],int row,int column)
{
	int c=0;
	for(int i=0; i<2; i++)
	{
		c+=arr1[row][i]*arr2[i][column];
	}
	return c;
}
void swap(int* i, int* j)
{
	int temp = *i;
	*i=*j;
	*j=temp;
}
void row_swap_column(int arr[2][2],int index)
{
	for (int i =0;i<2;i++)
	{
		swap(&arr[index][i],&arr[i][index]);
	}
}
