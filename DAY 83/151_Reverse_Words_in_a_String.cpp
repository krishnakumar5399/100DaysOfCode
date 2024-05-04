#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        stack<string> st ;
        int i = 0 ;
    
        string str ;
        while(i<s.length()){
            if(s[i] != ' '){
                str.push_back(s[i]) ;
                i++;
                
            }
            else if (s[i] == ' '){
                if(!str.empty()){
                    st.push(str) ;
                }
                str.clear() ;
                i++;
            }
        }
        if( ! str.empty()){
            st.push(str) ;
        }
        string ans ;
        while(!st.empty()){
            ans += st.top() ;
            ans += ' ' ;
            st.pop() ;
        }
        ans.pop_back() ;
        return ans ;


    }
};
int main() 
{
     
     
  return 0;
}