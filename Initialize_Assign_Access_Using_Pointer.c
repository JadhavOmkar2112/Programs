#include<stdio.h>

int main()
{
	int No1 = 0 , No2 = 0;
	int *p1 = &No1 , *p2 = &No2;
	
	printf("Enter 1st Number : ");
	scanf("%d",p1);
	
	printf("Enter 2nd Number : ");
	scanf("%d",p2);
	
	
	printf("Initialize using pointer : \n");
	printf("%d\t%d\n",*p1,*p2);
	
	printf("Before Assign using pointer : \n");
	printf("%d\t%d\n",*p1,*p2);
	
	
	*p1 = 100;
	*p2 = 200;
	
	printf("After Assign using pointer : \n");
	printf("%d\t%d\n",*p1,*p2);
	
	
	return 0;
}