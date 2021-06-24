//Accept number from user and return factorial

// Input : 5
// Output : 5*4*3*2*1	(120)

// Input : 4
// Output : 4*3*2*1	(24)

#include<stdio.h>
/*
int Fact(int iNo)
{
	int i = 0, c = 1;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(i = 1; i<=iNo ; i++)
	{
		c = c*i;
	}
	
	return c;
}
*/
int Fact(int iNo)
{
	int c = 1;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		c = c*iNo;
		iNo--;
	}
	return c;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = Fact(iValue);
	
	printf("Result is : %d\n",iRet);
	
	return 0;
}
