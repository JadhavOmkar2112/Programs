//Accept number from user and display that number of table

// Input : 5
// Output : 5 10 15 20 25 30 35 40 45 50

#include<stdio.h>
/*
void DisplayTable(int iNo)
{
	int i = 0;
	int c = 1;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(i=iNo ; c<=10 ; c++)
	{
		printf("%d\n",i*c);
	}
}
*/
void DisplayTable(int iNo)
{
	int c = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(c=1 ; c<=10 ; c++)
	{
		printf("%d\n",iNo * c);
	}
}

int main()
{
	int iValue;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	return 0;
}
