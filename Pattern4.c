// Input : 5   A
// Output : A  A  A  A

// Input : 3   C
// Output :  C  C  C

#include<stdio.h>

typedef unsigned int  ABC;


/////////////////////////////////////////////////////////
//
//	Function Name :	Pattern
//	Input :			Unsigned Integer , Character
//	Output :		Void
//	Description :	It is used to Display Character 'n' times
//	Date :			16/07/2021
//	Author :		Omkar Anil Jadhav
//
/////////////////////////////////////////////////////////
void Pattern(ABC iNo,char ch)
{
	int iCnt = 0;
	
	for(iCnt=1 ; iCnt<=iNo ; iCnt++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}

int main()
{
	ABC iValue1 = 0;
	char cValue2 = '\0';
	
	printf("Enter number : ");
	scanf("%u",&iValue1);
	
	printf("Enter Character : ");
	scanf(" %c",&cValue2);
	
	Pattern(iValue1,cValue2);
	
	return 0;
}
