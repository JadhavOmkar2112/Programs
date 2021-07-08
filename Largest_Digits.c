// Accept number from user and return the largest Digit from given number

// Input : 121
// Output : 2

// Input : 4502
// Output : 5

// Input : 7557
// Output : 7

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function name:     MaxDigits
//  Input :            Integer
//  Output :           Integer
//  Description :      It is used to return largest digit 
//					   from given number

//  Date :             08/07/2021
//  Author :           Omkar Anil Jadhav
//
/////////////////////////////////////////////////////////////

int MaxDigits(int No)
{
	int iMax = 0,iDigit = 0;
	
	while(No > 0)
	{
		iDigit = No % 10;
		
		if(iMax < iDigit)
		{
			iMax = iDigit;
		}
		
		No = No / 10;
	}
	
	return iMax;
	
}

int main()
{
	int iNo = 0,iRet = 0;
	
	
	printf("Enter number : ");
	scanf("%d",&iNo);
	
	iRet = MaxDigits(iNo);
	
	printf("Maximum Digit is : %d",iRet);
	
	return 0;
}
