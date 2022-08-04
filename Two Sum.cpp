#include <iostream>
#include <vector>
using namespace std;

class Solution {
public: // nums = [2,7,11,15], target = 9
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> targetIndices;
        for (int i = 0; i < nums.size(); i++)
            for (int j = i + 1; j < nums.size(); j++)
                if (nums[i] + nums[j] == target) {
                    targetIndices.push_back(i);
                    targetIndices.push_back(j);
                }
        return targetIndices;
    }
};