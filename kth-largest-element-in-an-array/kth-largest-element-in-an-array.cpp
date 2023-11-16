#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare (int i,int j) { return (i>j); }

class Solution {
public:
  int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end(), compare);

    return nums[k - 1];
  }
};

int main(){
  int n_nums, num, k, kth;
  vector<int> nums;
  Solution solution;

  cin >> n_nums;

  for(int i = 0; i < n_nums; i++){
    cin >> num;
    nums.push_back(num);
  }

  cin >> k;

  kth = solution.findKthLargest(nums, k);

  cout << kth;

  return 0;
}
