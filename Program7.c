#include<stdio.h>
void CheckResult(int iNo)
{
	if((iNo < 0) || (iNo > 100))
	{
		printf("Invalid marks\n");
		return;
	}
	if(iNo >= 0 && iNo < 35)
	{
		printf("Fail\n");
	}
	else if(iNo >= 35 && iNo < 50)
	{
		printf("Pass Class\n");
	}
	else if(iNo >= 50 && iNo < 60)
	{
		printf("Second Class \n");
	}
	else if(iNo >= 60 && iNo < 70)
	{
		printf("First Class \n");
	}
	else
	{
		printf("Distinction\n");
	}
}
int main()
{
	int iValue = 0;
	printf("Enter your marks : ");
	scanf("%d",&iValue);
	CheckResult(iValue);
	return 0;
}
