#include<bits/stdc++.h>
using namespace std;
/*
Following is the class structure of the Node class:
*/
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

int getSize (Node* head){
    int len = 0;
    Node* temp = head ;
    while(temp != NULL){
        len++;
        temp = temp->next ;
    }
    return len;
}
Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    // if LL has only one element .
       int n = getSize(head) ;
       int position = n-K +1;

    if(n== 1 && K == 1){
        Node* temp = head ;
        delete temp ;
       Node* ans = new Node(-1) ;
       return ans ;

    }

 
        if(n == K){
        Node* temp = head ;
        head = head->next ;
        temp ->next =NULL ;
        delete temp ;
        return head  ;
    }
    if (K==1){
            Node* prev = NULL;
            Node* curr = head ;
        
         while(n != 1){
             prev = curr ;
            curr = curr->next ;
            n--;
        }
            
            prev ->next = NULL ;

            curr->next =NULL;
            delete curr ;
            return head ;

    }
    Node* prev = NULL;
    Node* curr = head ;
    Node* nextNode;
    while(position != 1){
        prev = curr ;
        curr = curr->next ;
        position--;
    }
    nextNode = curr->next ;
    prev ->next = nextNode ;
    curr->next =NULL;
    delete curr ;
    return head ;
}

int main() 
{
     
     
  return 0;
}