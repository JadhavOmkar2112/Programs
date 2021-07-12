// Input : 5
// Output :  *  *  *  *  *

// Input : 9
// Output : *  *  *  *  *  *  *  *  *

#include<stdio.h>

typedef unsigned int  ABC;

void Pattern(ABC iNo)
{
	int iCnt = 0;
	
	printf("\n");
	
	for(iCnt=1 ; iCnt<=iNo ; iCnt++)
	{
		printf("*\t");
	}
	
	printf("\n");
}


int main()
{
	ABC iValue = 0;
	
	printf("Enter number");
	scanf("%u",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
