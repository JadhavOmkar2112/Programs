//Accept number from user and and check whether that number is prime number or not

// Input :   7
// Output :  True

// Input :  13
// Output :  prime

// Input :  12
// Output : False

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 2 ; iCnt<=iNo/2; iCnt++)
	{
		if((iNo%iCnt) == 0)
		{
			break;
		}
	}
	if(iCnt == (iNo/2)+1)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	bRet = CheckPrime(iValue);
	
	if(bRet == true)
	{
		printf("%d is prime number\n",iValue);
	}
	else
	{
		printf("%d is not prime number\n",iValue);
	}
}
