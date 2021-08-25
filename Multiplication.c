#include<stdio.h>

int Multiplication(int No1,int No2)
{
	int iMult = 0;
	
	if(No1 < 0)
	{
		No1 = -No1;
	}
	if(No2 < 0)
	{
		No2 = -No2;
	}
	
	
	iMult = No1 * No2;
	
	return iMult;
}

int main()
{
	int iNo1 =0,iNo2 =0,iRet = 0;
	
	printf("Enter 1st number : ");
	scanf("%d",&iNo1);
	
	printf("Enter 2nd number : ");
	scanf("%d",&iNo2);
	
	iRet = Multiplication(iNo1,iNo2);
	
	printf("Multiplication is : %d",iRet);
	
	return 0;
}