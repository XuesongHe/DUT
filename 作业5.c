#include "stdio.h"
#include "string.h"

void sort(char x[][20])
{
	int i,I,R;
	char temp[20];
	for(I=0;I<9;I++)
	{
		for(i=0;i<9-I;i++)
		{
			R=strcmp(x[i],x[i+1]);
			if(R>0)
			{
				strcpy(temp,x[i]);
				strcpy(x[i],x[i+1]);
				strcpy(x[i+1],temp);
			}
		}
	}
}

void main()
{
	char a[10][20];
	int i;
	for(i=0;i<10;i++)
		scanf("%s",a[i]);	
	sort(a);
	for(i=0;i<9;i++)
		printf("%s\n",a[i]);
	printf("%s",a[i]);
	
} 

