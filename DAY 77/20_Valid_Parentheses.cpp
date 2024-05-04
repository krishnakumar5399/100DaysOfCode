
// valid parentheses

/*20. Valid Parentheses
Solved
Easy
Topics
Companies
Hint
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false*/

#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<char> st ;
        for(int i = 0 ;i<s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]) ;
            }
            else{
                if(! st.empty()){
                    if(st.top() == '(' && s[i] == ')'){
                        st.pop() ;
                    }
                    else if (st.top() == '{' && s[i] == '}'){
                        st.pop() ;
                    }
                    else if(st.top() == '[' && s[i] == ']'){
                        st.pop() ;
                    }
                    else{
                        return false ;
                    }
                }
                else{
                    return false ;
                }
            }
        }
        if(st.empty()) return true ;
        else return false ;
        
    }
int main() 
{
     string s = "()[]{}" ;
     cout<<isValid(s)<<endl;   // 1
     
  return 0;
}