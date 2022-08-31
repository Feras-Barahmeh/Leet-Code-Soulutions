// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Medium


class Solution {
public:
    int LengthList(ListNode *head) {
        int counter = 0;
        while (head) {
            counter ++;
            head = head->next;
        }
        return counter;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int lengthList = LengthList(head) ; int counter = 1;
        ListNode * Prev = head; ListNode * Next = head->next;

        if (lengthList == n) return head->next;
        if (! head || !head->next) return NULL;

        while (counter <= lengthList) {
            if (lengthList - n == counter) {
                Prev->next = Prev->next->next;
                return head;
            }

            Prev = Prev->next;
            Next = Next->next;
            counter ++;
        }
        return NULL;
    }
};