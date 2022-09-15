// https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (! head || ! head->next) return true;
        stack <int> sv;
        ListNode * temp = head;
        while (temp) {
            sv.push(temp->val);

            temp = temp->next;
        }

        int lengthList = sv.size();

        int i = 0;

        while (head) {

            if (sv.top() != head->val) {
                return false;
            } else {
                sv.pop();

                head = head->next;
                i ++;
            }


            if (i == lengthList / 2)  break;
        }

        return true;
    }
};
