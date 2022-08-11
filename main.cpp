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


int main() {


    return 0;
}
