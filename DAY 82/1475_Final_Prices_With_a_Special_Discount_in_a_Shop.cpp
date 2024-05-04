#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextSmallerElement(vector<int>arr){
        vector<int> ans (arr.size()) ;
        stack<int> st ;
        st.push(-1) ;
        for(int i = arr.size()-1;i>=0 ;i--){
            int curr = arr[i] ;
            while(st.top() > curr){
                st.pop() ;
            }
            ans[i] = st.top() ;
            st.push(curr) ;
        }
        return ans ;
    }
    vector<int> finalPrices(vector<int>& prices) {

        vector<int> next = nextSmallerElement(prices) ;

        for(int i = 0 ;i<prices.size();i++){
            if(next[i] != -1){
               int discountPrice = prices[i] - next[i] ;
               prices[i] = discountPrice ;
            }
        }
        return prices ;
        
    }
};
int main() 
{
     
     
  return 0;
}