#include<stdio.h>

////////////////////////////////////////////////////
//
//	Function Name :	Swap
//	Input :			Integer,Integer
//	Output :		Void
//	Description :	It is use to Swap two Number
//	Date :			13/07/2021
//	Author :		Omkar Anil Jadhav
//
////////////////////////////////////////////////////

void Swap(int *P1,int *P2)
{
	
	(*P1) = (*P1) + (*P2);
	
	(*P2) = (*P1) - (*P2);
	
	(*P1) = (*P1) - (*P2);
	
}

int main()
{
	int No1 = 0,No2 = 0;
	
	printf("Enter 1st Number : ");
	scanf("%d",&No1);
	
	printf("Enter 2nd Number : ");
	scanf("%d",&No2);
	
	
	printf("\nBefore Swaping : \n");
	printf("No1 = %d\n",No1);
	printf("No2 = %d\n",No2);
	
	Swap(&No1,&No2);
	
	printf("\n\nAfter Swaping : \n");
	printf("No1 = %d\n",No1);
	printf("No2 = %d\n",No2);
	
	
	return 0;
}