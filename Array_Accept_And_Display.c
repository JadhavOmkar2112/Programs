// Accept N number from user and display that number.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)				//step 6
{
	int i = 0;
	printf("Element from the array are : \n");
	for(i=0 ; i<iSize ; i++)
	{
		printf("%d\n",Arr[i]);
	}
}

int main()
{
	int *arr = NULL;							//step 1
	int iLenth = 0,i = 0;
	
	printf("Enetr the number of element");		//step 2
	scanf("%d",&iLenth);
	
	arr = (int *)malloc(iLenth * sizeof(int));	//step 3
	
	printf("Enter the elements\n");
	
	for(i=0 ; i<iLenth ; i++)					//step 4
	{
		scanf("%d",&arr[i]);
	}
	
	Display(arr,iLenth);						//step 5
	
	free(arr);									//step 7
	return 0;
}
