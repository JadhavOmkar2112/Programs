// Accept number from user and display the digits 
// of that number separately in reverse order

// Input : 7521
// Output :	1
//			2
//			5
//			7


#include<stdio.h>
/////////////////////////////////////////////////////////////
//
//  Function name:     DisplayDigits
//  Input :            Integer
//  Output :           Void
//  Description :      It is used to display the digits 
//					   separately in reverse order

//  Date :             30/06/2021
//  Author :           Omkar Anil Jadhav
//
/////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
	int iDigit = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iNo = iNo / 10;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	DisplayDigits(iValue);
	
	return 0;
}