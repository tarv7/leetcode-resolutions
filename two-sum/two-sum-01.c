#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
  int i, j, find_for;
  int *arr;

  arr = (int *) malloc(2 * sizeof(int));
  *returnSize = 2;

  for(i = 0; i < numsSize; i++){
    find_for = target - nums[i];

    for(j = i + 1; j < numsSize; j++){
      if(find_for == nums[j]){
        arr[0] = i;
        arr[1] = j;

        return arr;
      }
    }
  }

  return arr;
}

int main(){
  int i, j, find_for;
  int n_nums, num, target;
  int nums[10000], *arr, returnSize;

  scanf("%d", &n_nums);

  for(i = 0; i < n_nums; i++){
    scanf("%d", &nums[i]);
  }

  scanf("%d", &target);

  arr = twoSum(nums, n_nums, target, &returnSize);

  printf("%d, %d\n", arr[0], arr[1]);

  return 0;
}
