/*
	Input : 4	4
	Output : 
	
	1	*	*	*
	*	2	*	*
	*	*	3	*
	*	*	*	4
	
*/

#include<stdio.h>

typedef unsigned int  ABC;

void Pattern(ABC iRow,ABC iCol)
{
	int i = 0;
	int j = 0;
	if(iRow != iCol)
	{
		return;
	}
	for(i=1 ; i<=iRow ; i++)
	{
		for(j=1 ; j<=iCol ; j++)
		{
			if( i == j )
			{
				printf("%d\t",i);
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	ABC iValue1 = 0,iValue2 = 0;
	
	printf("Enter number of rows");
	scanf("%u",&iValue1);
	
	printf("Enter number of columns");
	scanf("%u",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}
