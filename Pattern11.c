/*
	Input : 4	4
	Output : 
	
	#	#	#	#
	#	*	*	#
	#	*	*	#
	#	#	#	#
	
*/

#include<stdio.h>

typedef unsigned int  ABC;

void Pattern(ABC iRow,ABC iCol)
{
	int i = 0;
	int j = 0;
	if(iRow != iCol)
	{
		printf("Given inputs are wrong\n");
		return;
	}
	for(i=1 ; i<=iRow ; i++)
	{
		for(j=1 ; j<=iCol ; j++)
		{
			if( (j==1) || (i==1) || (j==iCol) || (i==iRow) )
			{
				printf("-\t");
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
	
	printf("Enter number of rows : ");
	scanf("%u",&iValue1);
	
	printf("Enter number of columns : ");
	scanf("%u",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}
