
#include<stdio.h>

int Mult(int *P1,int *P2)
{
	return ( (*P1) * (*P2) );
}

int main()
{
	int No1 = 0,No2 = 0,iRet = 0;
	int *p1 , *p2;
	
	printf("Enter 1st number : ");
	scanf("%d",&No1);
	
	printf("Enter 2nd number : ");
	scanf("%d",&No2);
	
	p1 = &No1;
	p2 = &No2;
	
	iRet = Mult(p1,p2);
	
	printf("Multiplication is : %d\n",iRet);
	
	return 0;
}