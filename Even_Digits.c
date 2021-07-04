// Accept number from user and count even digit from that number

// Input : 4521
// Output :  2

// Input : 8642
// Output : 4

// Input : 1357
// Output : 0

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:     EvenDigits
//  Input :            Integer
//  Output :           Integer
//  Description :      It is used to return count of even digits
//  Date :             04/07/2021
//  Author :           Omkar Anil Jadhav
//
/////////////////////////////////////////////////////////////

int EvenDigits(int iNo)
{
	int iCnt = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	if(iNo == 0)
	{
		return 1;
	}
	while(iNo > 0)
	{
		if(((iNo % 10) % 2) == 0)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = EvenDigits(iValue);
	
	printf("Number of even digits are : %d\n",iRet);
	
	return 0;
}
