#include<bits/stdc++.h>
using namespace std;

 //Definition for singly-linked list.
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* insertUsingRecursion(ListNode* prev, ListNode*curr,ListNode* head){
        // base case
        if(curr == NULL){
            return head ;
        }
        // processing
        int x = __gcd(prev->val ,curr->val) ;
        ListNode* newNode = new ListNode(x) ;
        prev ->next = newNode ;
        newNode ->next = curr ;
        prev = curr ;
        curr = curr->next ;
        // recursive call 
        ListNode* recKaAns = insertUsingRecursion(prev,curr,head) ;
        return recKaAns ;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* prev = head ;
        ListNode* curr = head->next ;
        // while(curr != NULL){
        //     int x  = __gcd(prev->val , curr->val) ;
        //     ListNode* newNode = new ListNode(x) ;
        //     prev->next =newNode ;
        //     newNode->next = curr;
        //     prev = curr ;
        //     curr = curr->next ;
        // }
        // return head ;
        
         return insertUsingRecursion(prev,curr,head) ;

        
        
    }
};
int main() 
{
     
     
  return 0;
}