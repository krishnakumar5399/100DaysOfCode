#include<bits/stdc++.h>
using namespace std;
/**
 Definition for singly-linked list.
 */
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    int getSize(ListNode* head){
        ListNode* temp = head ;
        int len = 0 ;
        while(temp != NULL){
            len++;
            temp = temp->next ;
        }
       return len ;
    }
    ListNode* rotateRight(ListNode* head, int k) {
       int n = getSize(head) ;
       
       if(head == NULL) return head;
       if(k>0){
         k = k % n ;
       }
       if (k == 0) return head ;
       if(n==1) return head ;
       else{
       
        ListNode* prev = NULL;
        ListNode* curr = head ;
        int pos = n-k ;
        while(pos != 0){
            pos--;
            prev = curr;
            curr = curr->next ;
        }
        prev ->next = NULL ;
        ListNode* temp = curr ;
        while(temp ->next != NULL){
            temp = temp->next ;
        }
        temp -> next = head ;
        head = curr;
        return head ;
       } 
       return head ;
    }
};
int main() 
{
     
     
  return 0;
}