#include <stdio.h>
int main( )
{
	int a=1,b=1,c,t,i=1,sum,total=1,n;
	//a:ÿһ��ĵ�һ������ b:��b�� c��ÿһ������һ������ i���������ĵ�һ��������ֵ   
	//sum:ÿһ��ĺ�  total:�ܺ� n:������ 
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
