#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> result(2);

      for(int i = 0; i < nums.size(); i++){
        int find_for = target - nums[i];

        for(int j = i + 1; j < nums.size(); j++){
          if(find_for == nums[j]){
            result[0] = i;
            result[1] = j;

            return result;
          }
        }
      }

      return result;
    }
};

int main(){
  int n_nums, num, target;
  vector<int> nums, result;
  Solution solution;

  cin >> n_nums;

  for(int i = 0; i < n_nums; i++){
    cin >> num;
    nums.push_back(num);
  }

  cin >> target;

  result = solution.twoSum(nums, target);

  cout << result[0] << result[1];

  return 0;
}
