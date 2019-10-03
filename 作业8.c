#include "stdio.h"
#define M 3

int **Maxrow (int a[M][M])
{
	int i,j,**p,*max[4],*temp;
	p=a;
	for(i=0;i<M;i++)
	{
		max[i]=*(p+i);
		for(j=1;j<M;j++)
		{
			if(*(*(p+i)+j)>*max[i])
			{
				temp=max[i];
				max[i]=(*(p+i)+j);
				(*(p+i)+j)=temp;
			}
		}
	}
	max[4]=*p;
	for(i=1;i<M;i++)
	{
		if(*(*(p+i)+i)>*max[4])
			temp=max[4];
			max[4]=*(p+i)+i;
			*(p+i)+i=temp;
	}
	return max;
}

void main()
{
	int i=4,a[M][M]={{1,2,3},{4,5,6},{7,8,9}};
	for(i=0;i<4;i++)
		printf("%d ",*(*(Maxrow(a))+i));
}


