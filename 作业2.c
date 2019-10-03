#include <stdio.h>
int main( )
{
	int a=1,b=1,c,t,i=1,sum,total=1,n;
	//a:每一项的第一个数字 b:第b项 c：每一项的最后一个数字 i：相隔两项的第一个数相差的值   
	//sum:每一项的和  total:总和 n:总项数 
	scanf("%d",&n);
	while(b<n)
	{
		a+=i;
		c=a+b;
		t=a; 
		sum=a;
		while(t<c)
		{
		  t++;  
		  sum*=t;
		}
		total+=sum;
		b++;
		i++;
	}
	printf("%d",total);
	      
	return 0;
}
