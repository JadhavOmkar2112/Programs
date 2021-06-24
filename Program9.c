// Accept two number from user and calculate it's power

// Input : 2  4
// Output : 2*2*2*2   (16)

// Input : 4  3
// Output : 4*4*4    (64)

#include<stdio.h>
/*	// type - 1
int Power(int iNo1,int iNo2)
{
	int i = 1;
	int n = 0;
	
	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	
	if(iNo2 < 0)
	{
		iNo2 = -iNo2;
	}
		
	for(iNo2; iNo2>n; n++)
	{
		i = iNo1 * i;
	}
	
	return i;
}
*/
	// type - 2
int Power(int iNo1,int iNo2)
{
	int iMult = 1;
	int iCnt = 0;
	
	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	
	if(iNo2 < 0)
	{
		iNo2 = -iNo2;
	}
	
	for(iCnt = 1 ; iCnt <= iNo2 ; iCnt++)
	{
		iMult = iMult * iNo1;
	}
	
	return iMult;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;
	
	printf("Enter first number : ");
	scanf("%d",&iValue1);
	
	printf("Enter secound number : ");
	scanf("%d",&iValue2);
	
	iRet = Power(iValue1,iValue2);
	
	printf("Result is : %d\n",iRet);
	
	return 0;
}
