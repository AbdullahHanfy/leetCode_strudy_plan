/*
 ============================================================================
 Name        : main.c
 Author      : Abdullah Hanfy
 Version     :
 Copyright   : Your copyright notice
 Description : Search Insert Position (Day 1)
 ============================================================================
 *You are a product manager and currently leading a team to develop a new product.
 * Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
 * You must write an algorithm with O(log n) runtime complexity.



	Example 1:

	Input: nums = [1,3,5,6], target = 5
	Output: 2
	Example 2:

	Input: nums = [1,3,5,6], target = 2
	Output: 1
	Example 3:

	Input: nums = [1,3,5,6], target = 7
	Output: 4
	Example 4:

	Input: nums = [1,3,5,6], target = 0
	Output: 0
	Example 5:

	Input: nums = [1], target = 0
	Output: 0


	Constraints:

	1 <= nums.length <= 104
	-104 <= nums[i] <= 104
	nums contains distinct values sorted in ascending order.
	-104 <= target <= 104
 *
 */






int searchInsert(int* arr, int numsSize, int item){

	int low = 0;
	int high = numsSize - 1;
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

    if(  item>arr[mid]){
        mid++;
    }


	return mid;


}

