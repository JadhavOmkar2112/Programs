// Accept number from user and return the addition of all digits from that number

// Input : 7521
// Output : 15 = (7+5+2+1)

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:     SumDigits
//  Input :            Integer
//  Output :           Integer
//  Description :      It is used to return sum of all digits
//  Date :             03/07/2021
//  Author :           Omkar Anil Jadhav
//
/////////////////////////////////////////////////////////////

int SumDigits(int iNo)
{
	int iC = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iC = iC + (iNo % 10);
		iNo = iNo / 10;
	}
	
	return iC;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = SumDigits(iValue);
	
	printf("Sum is : %d\n",iRet);
	
	return 0;
}