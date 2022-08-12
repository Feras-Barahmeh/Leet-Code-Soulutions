#include <iostream>
using namespace std;
//https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution {

    struct ListNode {
        int val;
        ListNode *next;
    };

public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * TempHead = head;
        while (TempHead != nullptr && TempHead->next != nullptr) {
            if (TempHead->next->val == TempHead->val) {
                ListNode *ptr = TempHead->next;
                TempHead->next = TempHead->next->next;
                delete ptr;
            } else {
                TempHead = TempHead->next;
            }
        }

        return head;
    }
};