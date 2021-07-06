// Accept number from user and check wether it is pallindrome
// Input : 121
// Output : True

// Input : 4502
// Output : False

// Input : 7557
// Output : True

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function name:     CheckPallindrome
//  Input :            Integer
//  Output :           boolean
//  Description :      It is used to Check number is Pallindrome or Not
//  Date :             07/07/2021 
//  Author :           Omkar Anil Jadhav
//
/////////////////////////////////////////////////////////////

bool CheckPallindrome(int iNo)
{
	int i = 0,ci = 0,z = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	ci = iNo;
	while(iNo != 0)
	{
		i = iNo % 10;
		
		z = (z * 10) + i;
		
		iNo = iNo / 10;
	}
	if(ci == z)
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
	bool bRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	
	bRet = CheckPallindrome(iValue);
	
	if(bRet == true)
	{
		printf("It is pallindrom\n");
	}
	else
	{
		printf("It is not Pallindrom\n");
	}
	
	return 0;
}
