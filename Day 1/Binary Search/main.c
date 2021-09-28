/*
 * main.c
 *
 *  Created on: Sep 28, 2021
 *      Author: Abdullah Hanfy
 *
 *      Binary Search
 */


#include <stdio.h>



int binarySearch(int arr[],int arr_size, int item)
{
	int low = 0;
	int high = arr_size - 1;
	int mid;


	while(low <= high)
	{
		mid  = (low + high) /2 ;
		if(arr[mid] == item)
		{
			return mid;
		}
		else if(arr[mid] > item)
		{
			high = mid -1;
		}
		else if(arr[mid] < item)
		{
			low = mid + 1;
		}
	}


	return -1;

}
int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	    int n = sizeof(arr) / sizeof(arr[0]);
	    int x = 1;
	    int result = binarySearch(arr,n, x);
	    (result == -1) ? printf("Element is not present"
	                            " in array")
	                   : printf("Element is present at "
	                            "index %d",
	                            result);
	return 0;
}
