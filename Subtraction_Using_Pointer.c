#include<stdio.h>

int Sub(int *No1,int *No2)
{
	int iSub = 0;
	
	if( (*No1) < 0 )
	{
		(*No1) = -(*No1);
	}
	if( (*No2) < 0 )
	{
		(*No2) = -(*No2);
	}
	
	
	iSub = (*No1) - (*No2);
	
	return iSub;
}

int main()
{
	int iNo1 = 0, iNo2 = 0, iRet = 0;
	int *pNo1 , *pNo2;
	
	printf("Enter 1st number : ");
	scanf("%d",&iNo1);
	
	printf("Enter 2nd number : ");
	scanf("%d",&iNo2);
	
	pNo1 = &iNo1;
	pNo2 = &iNo2;
	
	iRet = Sub(pNo1,pNo2);
	
	printf("Subtraction is : %d\n",iRet);
	
	return 0;
}