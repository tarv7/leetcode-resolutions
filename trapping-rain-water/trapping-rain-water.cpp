#include <iostream>
#include <vector>

#define MAX_HEIGHT 100000
#define MAX_N 20000

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
      short int i;
      int result = 0;
      vector<int> max_in_advice(height.size());

      max_in_advice[height.size() - 1] = height[height.size() - 1];
      for(i = height.size() - 1; i > 0; i--)
        max_in_advice[i-1] = max(height[i], max_in_advice[i]);

      for(i = 0; i < height.size() - 1; i++){
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
};

int main(){
  int i, n, result;
  vector<int> height(MAX_N);
  Solution solution;

  cin >> n;

  for(i = 0; i < n; i++)
    cin >> height[i];

  result = solution.trap(height);
  cout << result;

  return 0;
}
