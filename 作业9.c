#include "stdio.h"

struct menuItemType
{
	char menuItem[20];
	float menuPrice;	
}menuList[8];

struct menuItemType menuList[8]=
{
	{"Plain_Egg",1.99},
	{"Bacon",2.45},
	{"Muffin",0.99},
	{"Fruit_Basket",2.49}, 
	{"French_Toast",1.99},
	{"Coffee",0.50},
	{"Cereal",0.69},
	{"Tea",0.75}
};

int showMenu(struct menuItemType *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d:%-20s$%.2f\n",i+1,(*(p+i)).menuItem,(*(p+i)).menuPrice);
	}
}

int printCheck(struct menuItemType *p)
{
	int num,amount;
	float price=0;
	do
	{
		printf("\n��������������͵���źͷ���:\n");
		scanf("%d%d",&num,&amount);
		if(num==0)
		{
			printf("�����յ��˵��ǣ�%.2f$����л���Ĺ���",price); 
			break;
		}	
		price+=amount*(menuList[num-1].menuPrice)*1.05; 
		printf("�����ڵ��˵��ǣ�%.2f$,�������ͣ�����ͽ���������0��0��\n",price);	
	}while(1);
	
	
}

int main()
{
	showMenu(menuList,8);
	printCheck(menuList);
}

