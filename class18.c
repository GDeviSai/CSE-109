#include<stdio.h>
main()
{
	int b[10] = {};
	int i = 0;
	while(i<3)
	{
		scanf("%d",&b[i]);
		i++;
	} 
	i=0;
	while(i<3)
	{
		printf("%d\n",b[i]);
		i++;
	}
}
