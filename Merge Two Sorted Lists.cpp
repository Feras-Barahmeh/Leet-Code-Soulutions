// https://leetcode.com/problems/merge-two-sorted-lists/

#include<iostream>
using namespace std;

// When Submit code submit Public code

class Solution {

    struct ListNode {
        int val;
        ListNode* next;
    };

public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;

        ListNode *head = list1;

        if (list1->val > list2->val) {
            head = list2;
            list2 = list2->next;
        } else {
            head = list1;
        }

        ListNode *temp = head;

        while(list2 != NULL && list1 != NULL) {

            if (list1->val < list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if (!list1)
            temp->next = list2;
        else {
            temp->next = list1;
        }

        return head;

    }
};