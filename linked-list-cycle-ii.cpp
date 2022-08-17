#include<iostream>
// https://leetcode.com/problems/linked-list-cycle-ii/
// Medium
using namespace std;
class Solution {
    struct ListNode {
        int val;
        ListNode *next;
    };

public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head-> next ==NULL) return NULL;

        ListNode *walk   = head;
        ListNode *jump   = head;

        while (jump && jump->next) {
            jump = jump->next->next;
            walk = walk->next;


            if (jump == walk) {

                walk = head;
                while(walk != jump) {
                    walk = walk->next;
                    jump = jump->next;
                }
                return walk;

            }
        }
        return NULL;
    }
};
