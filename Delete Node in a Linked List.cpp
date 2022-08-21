#include<iostream>
// https://leetcode.com/problems/delete-node-in-a-linked-list/
// Easy
using namespace  std;
struct  ListNode {
    int val;
    ListNode * next;
};

class Solution_One {
public:
    void deleteNode(ListNode* node) { // Runtime in 10 ms

        ListNode* t = node->next;
        node->val = t->val;
        node->next = node->next->next;
        delete(t);
    }

    void deleteNode_NOT_BestSolution(ListNode* node) { // Runtime in 30 ms
        ListNode *temp = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete (temp);
    }
};

