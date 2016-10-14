#include <stdio.h>
#include "binSearchFunc.h"
int main(void)
{
	/*Initialization*/
	int numList[100], i, n, x, result;
	printf("\n\n\nHow many numbers you wanna enter:\t");
	scanf("%d", &n);
	/*Scans the input numbers*/
	for(i=0;i<n;i++)
		scanf("%d", &numList[i]);
	printf("\n\n\nThe list is:\t");
	/*Prints the values in the array*/
	for (i = 0; i < n; i++)
		printf("%d\t", numList[i]);
	printf("\n\n\nEnter the Number you want to search:\t");
	scanf("%d", &x);
	/*Calls the function in binSearchFunc.h file and stores the returned value in 'result' variable */
	result= binarySearch(numList,x,n);
	/*This following part just compares the value if the function returns -1, that means number not present in the array*/
	if(result==-1)
		printf("\n\n\nNumber not Found\n\n\n");
	else
		printf("\n\n\nNumber Found and Location is %d:\t\n\n\n", result);

	return 0;
}


