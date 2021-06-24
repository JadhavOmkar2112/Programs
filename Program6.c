/*
  Accept two number from user and check whether that number divisible by first number is divisible by second

// Input :  15 5
// Output:  True

// Input :  21 6
// Output:  False

*/
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :	CheckDivisible
//	Input :		Integer
//	Output :		Boolean(True / False)
//	Description :		It is used to check whether first number is divisible by second number
//	Date :			01/03/2021
//	Author :		Omkar Anil Jadhav
//
////////////////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo1,int iNo2)
{
	if( (iNo1%iNo2) == 0 )
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
	int iValue1 = 0;
	int iValue2 = 0;
	bool bRet = false;
	
	printf("Enter first number : ");
	scanf("%d",&iValue1);
	
	printf("Enter second number : ");
	scanf("%d",&iValue2);
	
	bRet = CheckDivisible(iValue1,iValue2);
	
	if(bRet == true)
	{
		printf("%d is divisible by %d\n",iValue1,iValue2);
	}
	else
	{
		printf("%d is not divisible by %d\n",iValue1,iValue2);
	}
	
	return 0;
}
