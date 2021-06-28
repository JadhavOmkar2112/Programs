//Accept number from user and check wether that number are perfect or not

// Input : 6
// Output: True  6(1 + 2 + 3) (Input == Output)  

// Input : 5
// Output: False  1

#include<stdio.h>
#include<stdbool.h>


////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :		CheckPerfect
//	Input :			Integer
//	Output :		Boolean
//	Description :		It is used to check wether given number is perfect or not
//	Date :			28/06/2021
//	Author :		Omkar Anil Jadhav
//
////////////////////////////////////////////////////////////////////////////////////

bool CheckPerfect(int iNo)
{
	int i = 0;
	int c = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(i = 1 ; i<=iNo/2 ; i++)
	{
		if((iNo%i) ==0)
		{
			c = i+c;
		}
	}
	if(iNo == c)
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
	bool bRet;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	bRet = CheckPerfect(iValue);
	if(bRet == true)
	{
		printf("%d is perfect number\n",iValue);
	}
	else
	{
		printf("%d is not perfect number\n",iValue);
	}
	
	return 0;
}