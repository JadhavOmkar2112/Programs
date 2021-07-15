// Input : 5
// Output : *  5  *  4  *  3  *  2  *  1

// Input : 9
// Output : *  9  *  8  *  7  *  6  *  5  *  4  *  3  *  2  *  1

#include<stdio.h>

typedef unsigned int  ABC;

void Pattern(ABC iNo)
{
	int iCnt = 0;
	
	for(iCnt=iNo ; iCnt>=1 ; iCnt--)
	{
		printf("*\t%d\t",iCnt);
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
