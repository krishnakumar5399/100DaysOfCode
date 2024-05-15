
// check loop present or not given linkedlist ;
//141. Linked List Cycle.
#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * */
    struct ListNode {
     int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL ) return false ;

        ListNode *slow = head ;
        ListNode* fast = head ;
        while(fast != NULL){
            fast = fast->next ;
            if(fast != NULL){
                fast = fast->next ;
                slow = slow->next ;
            }

            // check slow of fast is at same index.
            if(slow == fast) return true ;
        }
        return false ;
    }
};
int main() 
{
     
     
  return 0;
}