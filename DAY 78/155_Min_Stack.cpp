
//Design a Stack that support Push , pop, and retriving the minimum value of the array whith constant time complexity.

// Approach -> make a vector with pair in which pair first element is actual element of the array and second element of the pair indecate minimum element till current index.

#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
  // vector creation of pair.
   vector<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            // it means i am inserting first element.
            pair<int,int> p;
            p.first = val ;
            p.second = val ;
            st.push_back(p) ;
        }
        else{
            pair<int,int> p ;
            pair<int,int> rightMost ;
            rightMost = st.back() ;   // st.back() function give right most element from vector.
            p.first = val ;
            p.second = min(val,rightMost.second) ;
            st.push_back(p) ;
        }
        
    }
    
    void pop() {
        st.pop_back() ;
        
    }
    
    int top() {
        pair<int,int> rightMost;
        rightMost = st.back() ;
        return rightMost.first;
        
    }
    
    int getMin() {
        pair<int,int> rightMost;
        rightMost = st.back() ;
        return rightMost.second;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() 
{
     
     
  return 0;
}