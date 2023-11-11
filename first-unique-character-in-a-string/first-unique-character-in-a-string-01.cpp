#include<iostream>
#include<vector>

#define MAX_LEN 100010

using namespace std;

class Solution {
public:
  int firstUniqChar(string s) {
    vector<int> hash(200, 0);

    for(int i = 0; i < s.size(); i++)
        hash[s[i]] += 1;

    for(int i = 0; i < s.size(); i++){
      if(hash[s[i]] == 1){
        return i;
      }
    }

    return -1;
  }
};

int main(){
    string word;
    Solution solution;

    cin >> word;

    cout << solution.firstUniqChar(word);
    return 0;
}