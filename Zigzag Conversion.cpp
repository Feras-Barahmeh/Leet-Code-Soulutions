#include <iostream>
#include<vector>
// https://leetcode.com/problems/zigzag-conversion/
using namespace std;


class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        bool IsArrived = false; int CurretRow = 0;
        vector<string> EncriptText(min(int(s.length()), numRows));
        for (char c : s) {
            EncriptText[CurretRow] += c;
            if (CurretRow == 0 || CurretRow == numRows - 1) IsArrived = !IsArrived;
            CurretRow += IsArrived ? 1 : -1;
        }
        string encrpt;
        for (string row: EncriptText) {
            encrpt += row;
        }
        return encrpt;
    }
};