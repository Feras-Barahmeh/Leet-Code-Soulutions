// https://leetcode.com/problems/reverse-linked-list/
class Solution {
private:
    void rev(ListNode * &head, ListNode *current, ListNode * prev) {
        if (current == nullptr) {
            head = prev;
            return;
        }
        ListNode * forword = current->next;
        rev(head, forword, current);
        current->next = prev; // To link in prev node
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * curr = head;
        ListNode * prev = NULL;
        rev(head, curr, prev);
        return head;
    }
};