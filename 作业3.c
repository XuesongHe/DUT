#include "stdio.h"
int main()
{
	int a[10],b,i,x,max;
	static int ct[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{   
		for(x=i+1;x<10;x++)
		{
			if(a[x]==a[i])			
				ct[i]++;	
		}
	}
	max=ct[0];
	for(i=1;i<10;i++)
	{
		if(ct[i]>max)		
		{
			max=ct[i];
			b=i;
		}
	}
	max+=1;
	printf("�������ظ�������������%d���ظ�����Ϊ%d",a[b],max);
	return 0;
}

