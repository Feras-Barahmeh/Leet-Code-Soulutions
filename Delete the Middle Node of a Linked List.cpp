//  https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list


class Solution {
    struct ListNode {
        int val ;
        ListNode * next;
    };
public:

    int LenthList (ListNode * head) {
        int counter = 0;
        while (head->next) {
            counter ++;
            head = head->next;
        }
        return counter + 1;
    }


    ListNode* deleteMiddle(ListNode* head) {
        int counter = 0; int length = LenthList(head);
        ListNode * temp = head;

        while (temp->next)  {
            counter ++;
            if (counter == int(length / 2) ) {
                temp->next = temp->next->next;
                return head;
            }
            temp = temp->next;
        }
        return NULL;
    }
};