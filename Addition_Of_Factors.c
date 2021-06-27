// Accept number from user and return the addition of factors

// Input : 6
// Output: 1 + 2 + 3 (6)  

// Input : 5
// Output: 1 


#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :		FactorsSum
//	Input :			Integer
//	Output :		Integer
//	Description :		It is used to return Addition of given number factors
//	Date :			26/06/2021
//	Author :		Omkar Anil Jadhav
//
////////////////////////////////////////////////////////////////////////////////////


int FactorsSum(int No)
{
	int i = 0,iSum = 0;
	if(No < 0)
	{
		No = -No;
	}
	for(i=1 ; i<=No/2 ; i++)
	{
		if( (No % i) == 0 )
		{
			iSum = iSum + i;
		}
	}
	return iSum;
}

int main()
{
	int no = 0,Ret = 0;
	
	printf("Enter number : ");
	scanf("%d",&no);
	
	Ret = FactorsSum(no);
	
	printf("Addition of Factors is : %d",Ret);
	
	return 0;
}