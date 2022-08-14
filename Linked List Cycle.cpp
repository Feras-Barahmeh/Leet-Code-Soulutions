#include<iostream>
using namespace std;
// https://leetcode.com/problems/linked-list-cycle/
// Easy


class Solution {
    struct ListNode {
             int val;
             ListNode *next;
            ListNode(int x) : val(x), next(NULL) {}
        };
public:
    bool hasCycle(ListNode *head) {
        ListNode *ptr = head;
        if (head == NULL) return false;

        while(ptr == NULL || ptr->next == NULL) {
            if (ptr->next <= ptr ) return true;
            ptr = ptr->next;
        }
};