#include<iostream>
#include <string>
// https://leetcode.com/problems/multiply-strings/
//class Solution {
//public:
//
//    int NumberDigits(string num) {
//        if (num.size() == 1) return 1;
//        if (num.size() == 2) return 10;
//        if (num.size() == 3) return 100;
//        if (num.size() == 4) return 1000;
//        if (num.size() == 5) return 10000;
//        if (num.size() == 6) return 100000;
//        if (num.size() == 7) return 1000000;
//        if (num.size() == 8) return 10000000;
//        if (num.size() == 9) return 100000000;
//        return NULL;
//    }
//
//    int ConvertToInteger(string number) {
//        long long int IntegerNumber = 0;
//        long long int digits = (number.size() * NumberDigits(number)) / number.size();
//
//        for (int i = 0; i < number.size(); i++) {
//            IntegerNumber += (int(number[i]) - int ('0')) * digits;
//            digits = digits / 10;
//
//        }
//        return IntegerNumber;
//    }
//
//
//    string multiply(string num1, string num2) {
//        unsigned int Mul  = ConvertToInteger(num1) * ConvertToInteger(num2);
//
//        return  to_string(Mul);
//    }
//
//};

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") {
            return "0";
        }

        int len1 = num1.size();
        int len2 = num2.size();

        vector<int> num(len1 + len2, 0);

        for (int i = len1 - 1; i >= 0; i--) {
            for (int j = len2 - 1; j >= 0; j--) {
                int sum = (num1[i] - '0') * (num2[j] - '0') + num[i + j + 1];
                num[i + j] += sum / 10;
                num[i + j + 1] = sum % 10;
            }
        }

        int i = 0;
        while (i < num.size() && num[i] == 0) {
            i++;
        }

        string res = "";
        while (i < num.size()) {
            res.push_back(num[i] + '0');
            i++;
        }

        return res;
    }
};