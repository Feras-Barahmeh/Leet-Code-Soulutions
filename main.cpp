#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
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
public:
    int removeElement(vector<int>& nums, int val) {
        int counter = 0 ;
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == val) {
                nums[i] = 101;
                counter++;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size() - counter;
    }
};
int main() {
    Solution ob ;
    vector< int> numbers;
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(5);
    numbers.push_back(2);
    numbers.push_back(2);
    cout << ob.removeElement(numbers, 2) << endl;

}
