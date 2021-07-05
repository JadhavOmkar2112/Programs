// Accept number from user and return the number of frequency

// Input : 75845   5
// Output :  2

// Input : 89562   1
// Output : 0

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:     SumDigits
//  Input :            Integer
//  Output :           Integer
//  Description :      It is used to return frequency of 2nd number
//  Date :             05/07/2021
//  Author :           Omkar Anil Jadhav
//
/////////////////////////////////////////////////////////////

int DigitsFrequrncy(long int iNo,int i)
{
	int iCnt = 0;
	int iDigit = 0;
	
	if( iNo < 0 )
	{
		iNo = -iNo;
	}
	
	if( i<0 || i>9 )
	{
		printf("Given input is Wrong\n");
		return -1;
	}
	
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit == i)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	
	return iCnt;
}

int main()
{
	long int iValue = 0;
	int no = 0,iRet = 0;
	
	printf("Enter first number : ");
	scanf("%d",&iValue);
	
	printf("Enter secound number ");
	scanf("%d",&no);
	
	iRet = DigitsFrequrncy(iValue,no);
	
	printf("\nfrequency of %d is : %d\n",no,iRet);
	
	return 0;
}