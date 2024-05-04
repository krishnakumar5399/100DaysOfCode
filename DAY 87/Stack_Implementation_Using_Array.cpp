// Stack class.
class Stack {
  public:
    int *arr ;
    int size ;
    int tp ; 

    Stack(int capacity) {
        // Write your code here.
        arr = new int[capacity] ;
        this ->size = capacity ;
        this -> tp = -1 ;
    }

    void push(int num) {
        // Write your code here.
        if(tp < size-1){
            tp++;
            arr[tp] = num ;
        }
        
    }

    int pop() {
        // Write your code here.
        if(tp != -1){
            int val = arr[tp] ;
            tp -- ;
            return val;
        }
        else{
            return -1 ;
        }
    }
    
    int top() {
        // Write your code here.
        if(tp != -1){
            return arr[tp] ;
        }
        else{
            return -1 ;
        }
    }
    
    int isEmpty() {
        // Write your code here.
        if(tp == -1){
            return 1 ;
        }
        else{
            return 0 ;
        }
    }
    
    int isFull() {
        // Write your code here.
        if(tp+1 == size){
            return 1 ;
        }
        return 0 ;
    }
    
};
