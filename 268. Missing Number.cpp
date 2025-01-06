#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int result = n;

        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                result = i;
                break;
            }
        }

        return result;
    }
};


int main() {
    //vector<int> nums = {9,6,4,2,3,5,7,0,1};
    //sort(nums.begin(), nums.end());

    //int n = nums.size();
    //int result;
    //for (int i = 0; i < n; i++) {
      //  if (nums[i] != i) {
        //    result = i;
          //  break;
        //}
    //}
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    Solution sol;
    int result = sol.missingNumber(nums);

    cout << result << endl;
}

