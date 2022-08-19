#include <iostream>
#include<vector>
#include <algorithm>
// https://leetcode.com/problems/remove-element/
// Easy

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter = 0 ;
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == val) {
                nums[i] = 101;
                counter++;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size() - counter;
    }
};