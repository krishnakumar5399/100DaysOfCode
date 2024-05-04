#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.*/
     struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {                 
            return head;
        }

        // Handle the case where the head node needs to be removed
        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            if (curr->val == val) {
                ListNode* nextNode = curr->next;
                if (prev != NULL) {
                    prev->next = nextNode;
                } else {
                    // If removing the current node, head needs to be updated
                    head = nextNode;
                }
                delete curr;
                curr = nextNode;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};

int main() 
{
     
     
  return 0;
}