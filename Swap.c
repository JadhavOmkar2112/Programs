#include<stdio.h>

void Swap(int *No1,int *No2)
{
	int iTemp = 0;
	
	iTemp = *No1;
	
	*No1 = *No2;
	
	*No2 = iTemp;
	
}

int main()
{
	int iNo1 = 0, iNo2 = 0;
	
	printf("Enter 1st number : ");
	scanf("%d",&iNo1);
	
	printf("Enter 2nd number : ");
	scanf("%d",&iNo2);
	
	printf("Before Swaping \n iNo1 : %d \n iNo2 : %d\n",iNo1,iNo2);
	
	Swap(&iNo1,&iNo2);
	
	printf("After Swaping \n iNo1 : %d \n iNo2 : %d",iNo1,iNo2);
	
	return 0;
}