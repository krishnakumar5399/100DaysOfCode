#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    int getLength(ListNode* head){
        ListNode* temp = head ;
        int len = 0 ;
        while(temp != NULL){
            len++ ;
            temp = temp->next ;
        }
        return len ;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            head = NULL ;
            return head ;
        }
        int position = getLength(head) /2 + 1 ;
        ListNode* prev = NULL ;
        ListNode* curr  = head ;
        while(position != 1){
            position--;
            prev = curr;
            curr = curr->next ;
        }
        ListNode* nextNode = curr->next ;
        curr->next = NULL;
        prev->next = nextNode ;
        delete curr ;
        return head ;
        
    }
};
int main() 
{
     
     
  return 0;
}