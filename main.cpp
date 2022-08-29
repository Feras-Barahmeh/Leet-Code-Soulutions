#include <iostream>
#include<string>
#include<vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
class Solution {
public:

    int NumberDigits(string num) {
        if (num.size() == 1) return 1;
        if (num.size() == 2) return 10;
        if (num.size() == 3) return 100;
        if (num.size() == 4) return 1000;
        if (num.size() == 5) return 10000;
        if (num.size() == 6) return 100000;
        if (num.size() == 7) return 1000000;
        if (num.size() == 8) return 10000000;
        if (num.size() == 9) return 100000000;
        return NULL;
    }

    int ConvertToInteger(string number) {
        long long int IntegerNumber = 0;
        long long int digits = (number.size() * NumberDigits(number)) / number.size();

        for (int i = 0; i < number.size(); i++) {
            IntegerNumber += (int(number[i]) - int ('0')) * digits;
            digits = digits / 10;

        }
        return IntegerNumber;
    }


    string multiply(string num1, string num2) {
        unsigned int Mul  = ConvertToInteger(num1) * ConvertToInteger(num2);

        return  to_string(Mul);
    }

};

int main() {

    Solution obj;

    cout << obj.multiply("2", "3");



    return 0;
}