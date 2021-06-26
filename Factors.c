// Accept number from user and display the factors of that numbers

// Input : 6
// Output: 1  2  3  

// Input : 5
// Output: 1


#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :		Factors
//	Input :				Integer
//	Output :			void
//	Description :		It is used to display factors of given number
//	Date :				26/06/2021
//	Author :			Omkar Anil Jadhav
//
////////////////////////////////////////////////////////////////////////////////////

void Factors(int iNo)
{
	int i = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(i = 1 ; i<=iNo/2 ; i++)
	{
		if((iNo%i) ==0)
		{
			printf("%d  ",i);
		}
	}
	printf("\n");
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	Factors(iValue);
	
	return 0;
}
