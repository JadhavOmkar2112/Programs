#include<stdio.h>
#include<stdbool.h>

bool Armstrong(int No)
{
	int iDigit = 0;
	int iSum = 0;
	int iTemp = No;
	
	while(No)
	{
		iDigit = No % 10;
		
		iSum = iSum + (iDigit * iDigit * iDigit);
		
		No = No / 10;
	}
	
	if(iTemp == iSum)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	bool bret = false;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	bret = Armstrong(iValue);
	
	if(bret == true)
	{
		printf("%d is armstrong number\n",iValue);
	}
	else
	{
		printf("%d is not armstrong number\n",iValue);
	}
	
	
	return 0;
}