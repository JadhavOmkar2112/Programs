// Accept number from user and retrun addtion of all numbers till that number.
// Input : 4
// Output: 10(1 + 2 + 3 + 4) 

// Input : -6
// Output: 21 (1 + 2 + 3 + 4 + 5 + 6)

#include<stdio.h>

int Sum(int iN)
{
	int iAns = 0;
	int iI = 0;
	
	if(iN == 0)
	{
		return 0;
	}
	if(iN < 0)
	{
		iN = -iN;
	}
	for(iI=1; iI<=iN; iI++)
	{
		iAns = iAns + iI;
	}
	return iAns;
}

int main()
{
	int iNo = 0;
	int iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iNo);
	
	iRet = Sum(iNo);
	
	printf("Addition is : %d \n",iRet);
	
	return 0;
}
