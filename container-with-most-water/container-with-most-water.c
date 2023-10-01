#include <stdio.h>

#define MAX_HEIGHT 100000

int maxArea(int* height, int heightSize){
  int i, j, min_possible, result = 0, water_i_j;

  for(i = 0, j = heightSize - 1; i < j;){
    min_possible = height[i] < height[j] ? height[i] : height[j];
    water_i_j = (j - i) * min_possible;

    if(water_i_j > result)
      result = water_i_j;

    height[i] < height[j] ? i++ : j--;
  }

  return result;
}

int main(){
  int i, n, height[MAX_HEIGHT] = {0}, max;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &height[i]);
  }

  max = maxArea(height, n);
  printf("%d\n", max);

  return 0;
}
