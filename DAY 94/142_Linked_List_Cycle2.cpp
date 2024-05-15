
// 142. Linked List Cycle II

#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.*/
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head ;
        ListNode* fast = head ;

        while(fast != NULL){
            fast = fast->next ;
            if(fast != NULL){
                fast = fast->next ;
                slow = slow->next ;
            }
            if(fast == slow){
                break ;
            }
        }
        // check if loop not present.
        if(fast == NULL) {
            return NULL ;
        }

        // slow ko head pr rakh do.
        slow = head ;
        while(fast != slow){
            slow = slow->next ;
            fast = fast->next ;

            if(slow == fast){
                break ;
            }
        }
        return slow ;

        
    }
    
};
int main() 
{
     
     
  return 0;
}