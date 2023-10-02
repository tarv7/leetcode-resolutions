#include <stdlib.h>
#include <stdio.h>

#define MAX_HEIGHT 100000
#define MAX_N 20000

int trap(int* height, int heightSize){
  short int i;
  int result = 0;
  int max_in_advice[MAX_N] = {0};

  max_in_advice[heightSize - 1] = height[heightSize - 1];
  for(i = heightSize - 1; i > 0; i--)
    max_in_advice[i-1] = height[i] > max_in_advice[i] ? height[i] : max_in_advice[i];

  for(i = 0; i < heightSize - 1; i++){
    if(height[i] > height[i+1] && max_in_advice[i] >= height[i+1]){
      result += (height[i] - height[i+1]);

      if(max_in_advice[i] < height[i]){
        result -= (height[i] - max_in_advice[i]);
      }

      height[i+1] = height[i];
    }
  }

  return result;
}

int main(){
  int i, n, height[MAX_N], result;

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    scanf("%d", &height[i]);

  result = trap(height, n);
  printf("%d", result);

  return 0;
}
