// https://leetcode.com/problems/add-two-numbers/
// Medium

class Solution {
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x);
    };
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head = new ListNode(0) ; int Value = 0;
        ListNode * Result = head;
        int Currey  = 0;

        while (l1 || l2 || Currey)  {

            Value =  l1  ? l1->val  : 0;
            Value += l2  ? l2->val  : 0;
            Result->next = new ListNode((Value + Currey) % 10 );
            Result = Result->next;
            Currey = (Value + Currey) / 10;  // ( Value - int(Value % 10) ) % 10 == 0 ? 1 : (Value) % 10;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;

        }


        return head->next;
    }
};
//
//class Solution {
//public:
//
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        ListNode * Result = new ListNode ; int Value = 0;
//        Result->val = 0; int Currey  = 0;
//
//        while (l1 && l2)  {
//
//            Value =  l1  ? l1->val  : 0;
//            Value += l2  ? l2->val  : 0;
//
//            if (Value > 9) {
//                Result->val = ((Value) % 10) + Currey ;
//                Currey = ( Value - int(Value % 10) ) % 10 == 0 ? 1 : (Value) % 10;
//            } else {
//                Result->val = ((Value) % 10) + Currey ;
//            }
//
//            l1 = !l1 ? l1->next : NULL;
//            l2 = !l2 ? l2->next : NULL;
//            Result->next = !l1 || !l2 ? new ListNode : NULL;
//
//        }
//
//
//        return Result;
//    }
//};
