#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 */
  class Node {
  public:
      int data;
      Node *next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node *next) : data(x), next(next) {}
  };
 
int getSize(Node* head){
     Node* temp = head ;
     int len = 0 ;
     while(temp != NULL){
          len++;
          temp = temp->next ;
     }
     return len ;
}

Node *rotate(Node *head, int k) {
     // Write your code here.
     int n = getSize(head) ;
      k = k%n;
      if( k == 0) return head ;
      int position = n-k ;
      Node* temp = head;
      while(position != 1){
           position--;
           temp = temp->next ;
      }
      Node* head2 = temp->next ;
      temp->next = NULL ;

      //Node* h = reverse(head2) ;
      Node* tem = head2 ;
      while(tem ->next != NULL){
           tem = tem->next ;
      }
      tem ->next = head ;
      return head2 ;

}
int main() 
{
     
     
  return 0;
}