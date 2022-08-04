#include <iostream>
// https://leetcode.com/problems/palindrome-number/
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return 0;
        }
        string d = to_string(x);
        string numString;
        numString  = to_string(x);
        reverse(numString.begin(), numString.end());
        if (numString == d)
            return true;
        else
            return false;
    }
};