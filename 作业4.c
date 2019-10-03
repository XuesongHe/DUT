#include "stdio.h"
#include <math.h>
int main()
{
	int x,b,i=0,y=0,sum=0;
	scanf("%d",&x);
	if(x<0)
	{
		printf("fu ");
		x=-x;
	}	
	b=x;
	
	while(b/10>0)
	{
		b/=10;
		i++;	
	} 
	i++;
	
	int a[i];
    while(x/10>0)
    {
    	a[y]=x%10;
    	y++;
    	x/=10;
	}
	a[i-1]=x;
	
    int temp,u=0;
    for(;u<i/2;u++)
    {
    	temp=a[u];
    	a[u]=a[i-u-1];
    	a[i-u-1]=temp;
	}
	for(y=0;y<i;y++)
	{
		switch(a[y])
		{
			case 0:printf("ling ");break;
			case 1:printf("yi ");break;
			case 2:printf("er ");break;
			case 3:printf("san ");break;
			case 4:printf("si ");break;
			case 5:printf("wu ");break;
			case 6:printf("liu ");break;
			case 7:printf("qi ");break;
			case 8:printf("ba ");break;
			case 9:printf("jiu ");break;
		}
	}
	printf("\b");
	
	return 0;
}
