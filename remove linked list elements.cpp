#include<iostream>

// https://leetcode.com/problems/remove-linked-list-elements/
// Easy

using namespace std;

// Not best solution
class Solution_One {
    struct ListNode {
        int val;
        ListNode *next;
    };
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return NULL;

        ListNode* ptr = head;


        while (ptr->next) {

            if(ptr->next->val == val) {
                ptr->next = ptr->next->next;

            } else {
                ptr = ptr->next;
            }
        }

        if (! head->next) {
            if (head->val == val) {
                return NULL;
            } else {
                return head;
            }
        } else {
            if (head->val == val ) {
                head = head->next;
            }
        }



        return head;

    }
};


class Solution {
    struct ListNode {
        int val;
        ListNode *next;
    };
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode *curr = head;
        ListNode *prev = nullptr;

        while (curr) {
            if (curr->val == val) {
                if (!prev)
                    head = curr->next;
                else
                    prev->next = curr->next;

            } else {
                prev = curr;
            }
            curr = curr->next;

        }


        return head;

    }
};