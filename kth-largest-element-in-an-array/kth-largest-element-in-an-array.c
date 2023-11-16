#include <stdio.h>
#include <stdlib.h>

int compare(const void * num1, const void * num2){
  int a = *(int*) num1;  
  int b = *(int*) num2;  

    if(a > b)
      return -1;
    else if(a < b)
      return 1;

    return 0;  
}

int findKthLargest(int* nums, int numsSize, int k) {
  qsort(nums, numsSize, sizeof(int), compare);

  return nums[k - 1];
}

int main(){
  int i, n_nums, k, kth;
  int nums[10000], *arr, returnSize;

  scanf("%d", &n_nums);

  for(i = 0; i < n_nums; i++)
    scanf("%d", &nums[i]);

  scanf("%d", &k);

  kth = findKthLargest(nums, n_nums, k);

  printf("%d\n", kth);

  return 0;
}
