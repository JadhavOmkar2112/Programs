// Accept number from user and display all the numbers till that number.
// Input : 8
// Output : 1 2 3 4 5 6 7 8

// Input : -6
// Output : 1 2 3 4 5 6

/*
	Start
		Accept one number no
		If number is negative then convert it to positive
		Create one counter as Cnt and it to 1
		
		Iterate till the counter is lessthan or equal to the number
		  print the value of counter on screen
		  Increment the value of counter by 1
		continue
	Stop
*/
/*
#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	if(iNo == 0)	// Input filter
	{
		return;
	}
	if(iNo < 0)	//Input updator
	{
		iNo = -iNo;	//iNo = --8 -> 8
	}
	
	// 1. Initialization
	// 2. Condition
	// 3. Increment or Decrement factop
	// 4. Loop body
	
	//	1	    2	      3
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\n",iCnt);	//4
	}
}

int main()  // Entry point function
{
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
*/
/*
#include<stdio.h>

void Display()
{
	int iNo = 0;
	int iCnt = 0;
	
	while(1)
	{
		printf("Enter the number : ");
		scanf("%d",&iNo);
		
		if(iNo <= 0)
		{
			continue;
		}
		
		for(iCnt=1; iCnt<=iNo; iCnt++)
		{
			printf("%d",iCnt);
		}
		printf("\n");
		break;
	}
}

int main()
{
	Display();
	
	return 0;
}
*/

#include<stdio.h>

void Display()
{
	int iCnt = 0;
	int iNo = 0;
	while(1)
	{
		printf("Enter the number : ");
		scanf("%d",&iNo);
	
		if(iNo == 0)
		{
			return;
		}
		if(iNo < 0)	//iNo = --8 -> 8
		{
			iNo = -iNo;
		}
		
		for(iCnt = 1; iCnt <= iNo; iCnt++)
		{
			printf("%d\n",iCnt);
		}
		break;
	}
}

int main()
{
	Display();
	
	return 0;
}
