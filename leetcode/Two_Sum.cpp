/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{

    int *arry=(int *) malloc(sizeof(int)+sizeof(int));
    for (int j = 0; j < numsSize; j++)
    {
        
	for (int i = j+1; i <numsSize; i++)
	{

		if (nums[j]+nums[i]== target)
		{
            arry[0]=j;
            arry[1]=i;
           break;
            
		}
    
	}
    }
*returnSize=2;
  return arry;
}
