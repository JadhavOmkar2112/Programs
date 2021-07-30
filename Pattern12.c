/*
	Input : 4	4
	Output : 
	
	A
	A	B
	A	B	C
	A	B	C	D
	
	
*/

#include<stdio.h>

typedef unsigned int  ABC;

void Pattern(ABC iRow,ABC iCol)
{
	int i = 0;
	int j = 0;
	char ch = '\0';
	if(iRow != iCol)
	{
		return;
	}
	for(i=1 ; i<=iRow ; i++)
	{
		//ch = 'A';
		for(j=1,ch='A' ; j<=iCol ; j++,ch++)
		{
			if(i>=j)
			{
				printf("%c\t",ch);
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
