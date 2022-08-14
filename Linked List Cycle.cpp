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
        if(head==NULL) return false;
        ListNode *ptr=head;
        ListNode *pos =head;

        while(ptr && ptr->next)      {
            ptr=ptr->next->next;
            pos =pos->next;
            if(ptr==pos) return true;
        }
        return false;

    }
};