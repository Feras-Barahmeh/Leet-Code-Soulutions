#include <iostream>
#include<stack>
#include<string>

using namespace std;
// https://leetcode.com/problems/valid-parentheses/

class Solution { // Updated S
public :
    bool IfLeftParenthesess(char para) {
        if (para == '}' || para == ')' || para == ']')  {
            return true;
        } else {
            return false;
        }
    }

    bool isValid(string s) {

        stack <char> parenthesess;

        int length = s.length();

        for (int i = 0; i < length; i++) {


            if ( ! IfLeftParenthesess(s[i]))
                parenthesess.push(s[i]);

            else {
                if ( IfLeftParenthesess(s[i]) ) {
                    if (parenthesess.empty())
                        return false;

                    else if (s[i] == ')' && parenthesess.top() != '(')
                        return false;
                    else if (s[i] == '}' && parenthesess.top() != '{')
                        return false;
                    else if (s[i] == ']' && parenthesess.top() != '[')
                        return false;
                    else
                        parenthesess.pop();
                }
            }
        }

        if (parenthesess. empty()) {
            return true;
        }
        else {
            return false;
        }

    }
};
