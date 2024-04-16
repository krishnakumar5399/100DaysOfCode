#include<bits/stdc++.h>
using namespace std;
/************************************************************

    Following is the LinkedList class structure:
************************************************************/
    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};



Node * insert(Node * head, int n, int pos, int val) {
    // Write your code here
    if(head == NULL){
        Node* newNode = new Node(val) ;
        head = newNode ;
        return head;
    }
    else{
        // LL is not empty.
        // if(head->next == NULL && pos == n){
        //      Node* newNode = new Node(val) ;
        //       newNode ->next =head;
        //       head = newNode ;
        //       return head ;
        // }

        if(pos == 0){
            Node* newNode = new Node(val) ;
            newNode -> next = head ;
            head = newNode ;
            return head;
        }
        else if(pos  == n){
            // insert at tail.
            if(n==1){
                 Node* newNode = new Node(val) ;
                 head->next = newNode ;
                 return head ;
            }
            else{
                 Node* temp = head ;
                while(pos != 1){
                     temp = temp->next ;
                     pos--;
                 }
             Node* newNode = new Node(val) ;
             temp ->next = newNode ;
             return head ;
            }

            
        }
        else{
            Node* prev = NULL;
            Node* curr  = head ;
            while(pos != 0){
                prev = curr ;
                curr = curr->next ;
                pos--;
            }
             Node* newNode = new Node(val) ;
             prev->next = newNode ;
             newNode ->next = curr ;
             return head;
        }
    }
    return head ;
}
int main() 
{
     
     
  return 0;
}