#include "stdio.h"
#define S 2
#define C 2

struct student
{
	int num;
	char name[20];
	double course[C];
}stu[S];

int main()
{
	int i,j;
	double stusum=0,stuave=0;
	
	for(i=0;i<S;i++)
	{
		scanf("%d %s",&stu[i].num,stu[i].name);
		for(j=0;j<C;j++)
			scanf("%f",&stu[i].course[j]);
	}

	printf("%f %f\n",stu[0].course[0],stu[0].course[1]);
	
	for(i=0;i<S;i++)
	{
		for(j=0;j<C;j++)
			stusum+=stu[i].course[j];
		stuave=stusum/C;
		printf("%s的5门课平均分为%f\n",stu[i].name,stuave);
	}


	


	return 0;

}
