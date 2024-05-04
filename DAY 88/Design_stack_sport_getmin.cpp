#include<bits/stdc++.h>
using namespace std;
class SpecialStack {
    public:
    vector<pair<int,int>> st ;
        
    void push(int data) {
        // Implement the push() function.
        if(st.empty()){
            pair<int,int> p ;
            p.first = data ;
            p.second = data ;
            st.push_back(p) ;
        }
        else{
            pair<int,int> p ;
            p.first = data ;
            p.second = min(data,st.back().second) ;
            st.push_back(p) ;
            
        }
    }

    void pop() {
        // Implement the pop() function.
        st.pop_back() ;
    }

    int top() {
        // Implement the top() function.
        return st.back().first ;
    }

    int getMin() {
        // Implement the getMin() function.
        return st.back().second ;
    }  
};
int main() 
{
     
     
  return 0;
}