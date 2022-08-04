#include <iostream>
// https://leetcode.com/problems/roman-to-integer/
using namespace std;
class Solution {
public:
    int ValueCharater(char c) {

        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;

            default:
                return -1;
                break;
        }
    }

    bool CheckIfSub(char CharAfterCurrentChar, char currentChar) {
        if (currentChar == 'I' && (CharAfterCurrentChar == 'X' || CharAfterCurrentChar == 'V')) {
            return true;
        }
        else if (currentChar == 'X' && (CharAfterCurrentChar == 'L' || CharAfterCurrentChar == 'C')) {
            return  true;
        }
        else if (currentChar == 'C' && (CharAfterCurrentChar == 'D' || CharAfterCurrentChar == 'M')) {
            return  true;
        }
        return false;
    }

    int romanToInt(string s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (CheckIfSub(s[i + 1], s[i])) {
                result += ValueCharater(s[i + 1]) - ValueCharater(s[i]);
                i++;
            }
            else {
                result += ValueCharater(s[i]);
            }
        }
        return result;
    }
};