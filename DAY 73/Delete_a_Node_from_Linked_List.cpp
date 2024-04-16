#include<bits/stdc++.h>
using namespace std;
/****************************************************************
 
    Following is the class structure of the Node class:
    */

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
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
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
	// step 1: cover first elemment 
	// cover out last element ;
	// cover out middle elemtent ;
	int n = getSize(head) ;
	if(pos >= n) return head ;

	// if LL has only one element.
	if(n==1&& pos == 0){
		Node* temp = head ;
		temp->next =NULL ;
		head = head->next ;
		delete temp ;
		return head ;
	}

	// if pos == 0
	else if(pos == 0){
		Node* temp = head ;
		head = head->next ;
		temp->next =NULL ;
		delete temp ;
		return head ;		
	}
	// delete last ;
	else if(pos == n-1){
		Node* prev = NULL ;
		Node* curr = head ;
		while(pos !=0){
			pos--;
			prev = curr;
			curr = curr->next ;

		}
		prev->next =NULL ;
		delete curr ;
		return head ;
	}
	else{
		Node* prev = NULL ;
		Node* curr = head ;
		while(pos !=0){
			pos--;
			prev = curr;
			curr = curr->next ;

		}
		Node* nextNode = curr->next ;
		prev->next = nextNode ;
		curr->next = NULL ;
		delete curr ;
		return head ;
	}

	// middle pos 

}

int main() 
{
     
     
  return 0;
}