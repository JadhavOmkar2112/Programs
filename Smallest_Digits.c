// Accept number from user and return the Smallest Digit from given number

// Input : 121
// Output : 1

// Input : 4502
// Output : 0

// Input : 7557
// Output : 5

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:     MinDigits
//  Input :            Integer
//  Output :           Integer
//  Description :      It is used to return Smallest digit 
//					   from given number

//  Date :             09/07/2021
//  Author :           Omkar Anil Jadhav
//
/////////////////////////////////////////////////////////////

int MinDigits(int No)
{
	int iMin = 9,iDigit = 0;
	
	if(No < 0)
	{
		No = -No;
	}
	
	while(No > 0)
	{
		iDigit = No % 10;
		
		if(iMin > iDigit)
		{
			iMin = iDigit;
		}
		
		No = No / 10;
	}
	
	return iMin;
	
}

int main()
{
	int iNo = 0,iRet = 0;
	
	
	printf("Enter number : ");
	scanf("%d",&iNo);
	
	iRet = MinDigits(iNo);
	
	printf("Smallest Digit is : %d",iRet);
	
	return 0;
}
