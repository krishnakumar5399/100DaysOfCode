#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public :
    int data;
    ListNode* next;

    // constructor
    //default constructor
    ListNode(){
        this ->next = NULL;
    }

    // parameterise constructor
    ListNode(int data){
        this ->data = data ;
        this ->next = NULL ;
    }

};

void insertNodeAtTail(ListNode* &head , ListNode* &tail,int data){
    // if LL is empty
    if(head == NULL){
        ListNode* newNode = new ListNode(data) ;
        head = newNode ;
        tail = newNode ;
    }
    else{
        // if LL is not empty
        // step 1 : create new node
        ListNode* newNode = new ListNode(data) ;

        // connecting new node
        tail ->next = newNode ;

        // update tail
        tail = newNode ;
        
    }
}
void print(ListNode* head){
    ListNode* temp = head ;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next ;
    }
    cout<<endl;
}
int getLength(ListNode* head){
        int len  = 0 ;
        ListNode* temp = head ;
        while(temp != NULL){
            len++;
            temp = temp->next ;
        }
        return len ;
    }
    ListNode* middleNode(ListNode* head) {
        int position  = getLength(head)/2 + 1 ;
        // itrating second method second method 
        // ListNode* temp = head ;
        // while(position !=1){
        //     position-- ;
        //     temp = temp->next ;
        // }
        // return temp ;

        // int currpo = 1 ;
        // ListNode* ans = NULL ;

        // while(currpo != position){
        //     currpo++;
        //    head = head->next ;
        // }
        // return head ;

        // turtorise method 

        ListNode* slow = head ;
        ListNode* fast = head ;
        while(fast != NULL){
            fast = fast->next ; // increment one step ;
            if(fast != NULL){
                fast = fast->next ; // complete two step fast pointer
                slow = slow->next ;
            }
        }
        return slow ;
        
        
    }

int main() 
{
    ListNode* head = NULL ;
    ListNode* tail = NULL ;
    insertNodeAtTail(head,tail,10) ;
    insertNodeAtTail(head,tail,20) ;
    insertNodeAtTail(head,tail,30) ;
    insertNodeAtTail(head,tail,40) ;
    insertNodeAtTail(head,tail,50) ;
    cout<<"tail : "<<tail->data<<endl;
    print(head) ;
    ListNode* middleHead =  middleNode(head) ;
   
    print(middleHead) ;


     
     
  return 0;
}