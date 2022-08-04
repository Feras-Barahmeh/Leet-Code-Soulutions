#include <iostream>
#include<vector>
#include<string>
using namespace std;
// https://leetcode.com/problems/longest-common-prefix/

struct InfoString {
    string name;
    int length;
};


class Solution {
public:
    InfoString MinLengthString(vector<string> strs) {
        InfoString minimum;
        minimum.length =  strs.at(0).size();

        for (int i = 0; i < strs.size(); i++ ) {
            if (strs.at(i).size() <= minimum.length) {
                minimum.length = strs.at(i).size();
                minimum.name = strs.at(i);
            }
        }
        return minimum;
    }

    bool FindSub(string sub, vector<string> strings) {


        for (string str : strings) {
            if (str.substr(0, sub.length()) != sub) {
                return false;
            }
        }

        return true;
    }


    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) {
            return strs.at(0);
        }

        string result = "";

        for (int i = MinLengthString(strs).length; i >=0 ; i--) {
            if (! FindSub(MinLengthString(strs).name.substr(0, i), strs)) {
                continue;
            } else {
                return  MinLengthString(strs).name.substr(0, i) ;

            }
        }

        return "";
    }
};

int main() {
    Solution obj;
    vector<string> strs ;

   strs.push_back("a") ;

    cout << obj.longestCommonPrefix(strs);



    return 0;
}
