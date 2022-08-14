#include <iostream>
#include<string>

using namespace std;

class  LinkedList {
    struct Node {
        int data;
        Node* next;
    };

    Node* head = NULL;

public:
    void append(int value) {
        Node* NewNode = new Node;
        NewNode->data = value;
        NewNode->next = NULL;

        if (head == NULL) {
            head = NewNode;
        }
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = NewNode;
        }
    }

    void remove(int value) {
        Node* prev, * temp;
        if (head == NULL) {
            cout << "Empty Linked List " << endl;
            return;
        }

        temp = prev = head;

        if (temp->data == value) {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != NULL) {


            if (temp->data == value) {
                prev = temp->next;
                delete temp;
                return;

            }
            else {
                prev = temp;
                temp = temp->next;
            }
        }


    }

    void display() {
        Node* ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
};

class Solution {
    struct ListNode {
        int val;
        ListNode *next;
    };
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * TempHead = head;
        while (TempHead != nullptr && TempHead->next != nullptr) {
            if (TempHead->next->val == TempHead->val) {
                ListNode *ptr = TempHead->next;
                TempHead->next = TempHead->next->next;
                delete TempHead->next;
            } else {
                TempHead = TempHead->next;
            }
        }

        return head;
    }
};

struct  Node {
     int val;
     Node *next;
};

int main() {
    Node *text;
    text->val = 5;
    cout << text->val << endl;
    return 0;
}
