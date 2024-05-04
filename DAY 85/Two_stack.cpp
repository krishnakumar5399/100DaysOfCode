#include <bits/stdc++.h> 
class TwoStack {
    int *array;
    int top1 ;
    int top2 ;
    int size ;

public:



    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this->size = s ;
        array = new int[s] ;
        this->top1 = -1 ;
        this->top2 = s ;
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(abs(top2 - top1) != 1){
            top1++;
            array[top1] = num ;
        }
   
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(abs(top2 - top1) != 1){
            top2--;
            array[top2] = num ;
        }
   
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1 == -1) return -1 ;
        else{
           int val =  array[top1]  ;
            top1--;
            return val ;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(top2 == size) return -1 ;
        else{
            int val = array[top2]  ;
            top2++;
            return val ;
        }
    }
};
