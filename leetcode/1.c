#include <stdio.h>
#include <stdlib.h> 

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = i+1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {  
                *returnSize = 2;
                int* result = (int*)malloc(sizeof(int) * 2);
                result[0] = i; result[1] = j; 
                return result;
            } 
        }
    }
    *returnSize = 0;
    return NULL;
}
int main()
{
    int nums[] ={2, 7, 11, 15};
    int target = 13;
    int numsSize = 4;
    int *return_size;
    int *test_result = twoSum(nums, numsSize, target,return_size);

    if (return_size > 0) {
        printf("Indices: %d, %d\n", test_result[0], test_result[1]);
        free(test_result);  // 释放动态分配的内存
    } else {
        printf("No matching indices found.\n");
    }
}