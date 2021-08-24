/*
	Q.Write a C program to read two numbers from user 
	and add them using pointers. How to find sum of 
	two number using pointers in C programming. 
	Program to perform arithmetic operations on 
	number using pointers.
*/
#include<stdio.h>

///////////////////////////////////////////////////////
//
//	Function Name : Addition
//	Input :			Integer,Integer
//	Output :		Integer
//	Description :	it is use to return Addition of two 
//					number using pointer
//	Date :			
//	Author :		Omkar Anil Jadhav
//	
///////////////////////////////////////////////////////
int Addition(int *P1,int *P2)
{
	return ( (*P1) + (*P2) );
}

int main()
{
	int No1 = 0,No2 = 0,iRet = 0;
	int *p1 , *p2;
	
	printf("Enter 1st number : ");
	scanf("%d",&No1);
	
	printf("Enter 2nd number : ");
	scanf("%d",&No2);
	
	p1 = &No1;
	p2 = &No2;
	
	iRet = Addition(p1,p2);
	
	printf("Addition is : %d\n",iRet);
	
	return 0;
}