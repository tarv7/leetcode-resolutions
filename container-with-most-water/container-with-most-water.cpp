#include <iostream>
#include <vector>

#define MAX_HEIGHT 100000

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
      short int min_possible;
      int water_i_j, result = 0;

      for(int i = 0, j = height.size() - 1; i < j;){
        min_possible = min(height[i], height[j]);
        water_i_j = (j - i) * min_possible;

        result = max(result, water_i_j);

        height[i] < height[j] ? i++ : j--;
      }

      return result;
    }
};

int main(){
  int i, n, max;
  vector<int> height(MAX_HEIGHT);
  Solution solution;

  cin >> n;

  for(i = 0; i < n; i++)
    cin >> height[i];

  max = solution.maxArea(height);
  cout << max;

  return 0;
}
