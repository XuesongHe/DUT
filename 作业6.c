#include "stdio.h"

int MaxCol(int array[][3],int n)
{
	int max;
	int i;
	max=array[n][0];
	for(i=1;i<3;i++)
	{
		if(array[n][i]>max)
			max=array[n][i];
	}
	return max;
}

int main()
{
	int x[3][3];
	int i,j;
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			scanf("%d",&x[i][j]);
		}
	};
	printf("%d ",MaxCol(x,0));
	printf("%d ",MaxCol(x,1));
	printf("%d",MaxCol(x,2));
	return 0;
}
