/*
	Write a C program to copy one array elements to 
	another array using pointers. How to copy array 
	elements from one array to another array using 
	pointers. Logic to copy one array to another array 
	using pointers in C programming.
*/
#include<stdio.h>

//////////////////////////////////////////////////////////
//
//	Function Name :	ArrayCopy
//	Input : 		Integer,Integer,Integer
//	Output :		Void
//	Discription : 	It is use to first Array Copy into 
//					Second Array
//	Date : 			
//	Author :		Omkar Anil Jadhav
//
//////////////////////////////////////////////////////////

void ArrayCopy(int *Arr1,int *Arr2,int Length)
{
	int iCnt = 0;
	
	for(iCnt=0 ; iCnt<Length ; iCnt++)
	{
		*Arr2 = *Arr1;
		Arr1++;
		Arr2++;
	}
	
}

int main()
{
	int iSize = 0,iCnt = 0;
	
	printf("Enter Size : ");
	scanf("%d",&iSize);
	
	int Arr1[iSize] , Arr2[iSize];
	
	int *p = Arr1;
	
	for(iCnt=0 ; iCnt < iSize ; iCnt++)
	{
		scanf("%d",p);
		p++;
	}
	
	ArrayCopy(Arr1,Arr2,iSize);
	
	printf("\n1st Array : \n");
	for(iCnt=0 ; iCnt < iSize ; iCnt++)
	{
		printf("%d\t",Arr1[iCnt]);
	}
	
	printf("\nCopy Array : \n");
	for(iCnt=0 ; iCnt < iSize ; iCnt++)
	{
		printf("%d\t",Arr2[iCnt]);
	}
	
	
	
	return 0;
}